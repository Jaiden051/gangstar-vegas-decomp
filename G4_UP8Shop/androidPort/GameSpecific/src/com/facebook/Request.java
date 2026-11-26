// Decompiled from classes.dex (SourceFile: Request.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.OpenGraphObject$Factory;
import android.os.ParcelFileDescriptor;
import android.text.TextUtils;
import android.util.Log;
import com.facebook.internal.AttributionIdentifiers;
import com.facebook.internal.Logger;
import com.facebook.internal.ServerProtocol;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import com.facebook.model.OpenGraphObject;
import java.util.Arrays;
import java.util.Locale;
import java.util.regex.Pattern;
public class Request {
    // Fields
    private static java.lang.String ACCEPT_LANGUAGE_HEADER;
    private static java.lang.String ACCESS_TOKEN_PARAM;
    private static java.lang.String ATTACHED_FILES_PARAM;
    private static java.lang.String ATTACHMENT_FILENAME_PREFIX;
    private static java.lang.String BATCH_APP_ID_PARAM;
    private static java.lang.String BATCH_BODY_PARAM;
    private static java.lang.String BATCH_ENTRY_DEPENDS_ON_PARAM;
    private static java.lang.String BATCH_ENTRY_NAME_PARAM;
    private static java.lang.String BATCH_ENTRY_OMIT_RESPONSE_ON_SUCCESS_PARAM;
    private static java.lang.String BATCH_METHOD_PARAM;
    private static java.lang.String BATCH_PARAM;
    private static java.lang.String BATCH_RELATIVE_URL_PARAM;
    private static java.lang.String CONTENT_ENCODING_HEADER;
    private static java.lang.String CONTENT_TYPE_HEADER;
    private static java.lang.String FORMAT_JSON;
    private static java.lang.String FORMAT_PARAM;
    private static java.lang.String ISO_8601_FORMAT_STRING;
    public static int MAXIMUM_BATCH_SIZE;
    private static java.lang.String ME;
    private static java.lang.String MIME_BOUNDARY;
    private static java.lang.String MY_ACTION_FORMAT;
    private static java.lang.String MY_FEED;
    private static java.lang.String MY_FRIENDS;
    private static java.lang.String MY_OBJECTS_FORMAT;
    private static java.lang.String MY_PHOTOS;
    private static java.lang.String MY_STAGING_RESOURCES;
    private static java.lang.String MY_VIDEOS;
    private static java.lang.String OBJECT_PARAM;
    private static java.lang.String PICTURE_PARAM;
    private static java.lang.String SDK_ANDROID;
    private static java.lang.String SDK_PARAM;
    private static java.lang.String SEARCH;
    private static java.lang.String STAGING_PARAM;
    public static final java.lang.String TAG;
    private static java.lang.String USER_AGENT_BASE;
    private static java.lang.String USER_AGENT_HEADER;
    private static java.lang.String VIDEOS_SUFFIX;
    private static java.lang.String defaultBatchApplicationId;
    private static volatile java.lang.String userAgent;
    private static java.util.regex.Pattern versionPattern;
    private java.lang.String batchEntryDependsOn;
    private java.lang.String batchEntryName;
    private boolean batchEntryOmitResultOnSuccess;
    private com.facebook.Request$Callback callback;
    private com.facebook.model.GraphObject graphObject;
    private java.lang.String graphPath;
    private com.facebook.HttpMethod httpMethod;
    private java.lang.String overriddenURL;
    private android.os.Bundle parameters;
    private com.facebook.Session session;
    private boolean skipClientToken;
    private java.lang.Object tag;
    private java.lang.String version;

    // Methods
    static
    {
      TAG = com.facebook.Request.class.getSimpleName();
      versionPattern = Pattern.compile("^/?v\\d+\\.\\d+/(.*)");
    }

    public Request()
    {
      this(null, null, null, null, null);
    }

    public Request(com.facebook.Session p0, String p1)
    {
      this(p0, p1, null, null, null);
    }

    public Request(com.facebook.Session p0, String p1, android.os.Bundle p2, com.facebook.HttpMethod p3)
    {
      this(p0, p1, p2, p3, null);
    }

    public Request(
            com.facebook.Session p0,
            String p1,
            android.os.Bundle p2,
            com.facebook.HttpMethod p3,
            com.facebook.Request$Callback p4)
    {
      this(p0, p1, p2, p3, p4, null);
    }

    public Request(
            com.facebook.Session p0,
            String p1,
            android.os.Bundle p2,
            com.facebook.HttpMethod p3,
            com.facebook.Request$Callback p4,
            String p5)
    {
      super();
      this.batchEntryOmitResultOnSuccess = true;
      this.skipClientToken = false;
      this.session = p0;
      this.graphPath = p1;
      this.callback = p4;
      this.version = p5;
      this.setHttpMethod(p3);
      if ( p2 != null )
        this.parameters = new android.os.Bundle(p2);
      else
        this.parameters = new android.os.Bundle();
      if ( this.version == null )
        this.version = ServerProtocol.getAPIVersion();
    }

    Request(com.facebook.Session p0, java.net.URL p1)
    {
      super();
      this.batchEntryOmitResultOnSuccess = true;
      this.skipClientToken = false;
      this.session = p0;
      this.overriddenURL = p1.toString();
      this.setHttpMethod(HttpMethod.GET);
      this.parameters = new android.os.Bundle();
    }

    /* synthetic */ static java.util.List access$000(com.facebook.Response p0, Class p1)
    {
      return typedListFromResponse(p0, p1);
    }

    /* synthetic */ static boolean access$100(Object p0)
    {
      return isSupportedParameterType(p0);
    }

    /* synthetic */ static String access$200(Object p0)
    {
      return parameterToString(p0);
    }

    private void addCommonParameters()
    {
      String AccessToken; // RETVAL
      String ApplicationId;
      String ClientToken;
      if ( this.session != null )
      {
        if ( !this.session.isOpened() )
          throw new com.facebook.FacebookException("Session provided to a Request in un-opened state.");
        if ( !this.parameters.containsKey("access_token") )
        {
          AccessToken = this.session.getAccessToken();
          Logger.registerAccessToken(AccessToken);
          this.parameters.putString("access_token", AccessToken);
        }
      }
      else if ( !this.skipClientToken && !this.parameters.containsKey("access_token") )
      {
        ApplicationId = Settings.getApplicationId();
        ClientToken = Settings.getClientToken();
        if ( Utility.isNullOrEmpty(ApplicationId) || Utility.isNullOrEmpty(ClientToken) )
          Log.d(TAG, "Warning: Sessionless Request needs token but missing either application ID or client token.");
        else
          this.parameters.putString("access_token", ApplicationId + "|" + ClientToken);
      }
      this.parameters.putString("sdk", "android");
      this.parameters.putString("format", "json");
    }

    private String appendParametersToBaseUrl(String p0)
    {
      android.net.Uri.Builder v2;
      java.util.Iterator v3;
      String v4;
      Object v5;
      Object[] v6;
      v2 = new android.net.Uri.Builder().encodedPath(p0);
      v3 = this.parameters.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        v5 = this.parameters.get(v4);
        if ( v5 == null )
          v5 = "";
        if ( isSupportedParameterType(v5) )
        {
          v2.appendQueryParameter(v4, parameterToString(v5).toString());
        }
        else if ( this.httpMethod == HttpMethod.GET )
        {
          v6 = new Object[1];
          v6[0] = v5.getClass().getSimpleName();
          throw new IllegalArgumentException(String.format("Unsupported parameter type for GET request: %s", v6));
        }
      }
      return v2.toString();
    }

    private static java.net.HttpURLConnection createConnection(java.net.URL p0)
 throws java.io.IOException {
      java.net.HttpURLConnection v1;
      v1 = (java.net.HttpURLConnection)p0.openConnection();
      v1.setRequestProperty("User-Agent", getUserAgent());
      v1.setRequestProperty("Accept-Language", Locale.getDefault().toString());
      v1.setChunkedStreamingMode(0);
      return v1;
    }

    public static com.facebook.Response executeAndWait(com.facebook.Request p0)
    {
      com.facebook.Request[] v1;
      java.util.List v2; // RETVAL
      java.util.List v3;
      v1 = new com.facebook.Request[1];
      v1[0] = p0;
      v2 = executeBatchAndWait(v1);
      v3 = v2;
      if ( v2 == null || v2.size() != 1 )
        throw new com.facebook.FacebookException("invalid state: expected a single response");
      return (com.facebook.Response)v3.get(0);
    }

    public static java.util.List<com.facebook.Response> executeBatchAndWait(com.facebook.RequestBatch p0)
    {
      String v1;
      java.util.List v2;
      v1 = "requests";
      Validate.notEmptyAndContainsNoNulls(p0, "requests");
      try
      {
        return executeConnectionAndWait(toHttpConnection(p0), p0);
      }
      catch ( Exception v4 )
      {
        v2 = Response.constructErrorResponses(p0.getRequests(), null, new com.facebook.FacebookException(v4));
        runCallbacks(p0, v2);
      }
      return v2;
    }

    public static java.util.List<com.facebook.Response> executeBatchAndWait(
            java.util.Collection<com.facebook.Request> p0)
    {
      return executeBatchAndWait(new com.facebook.RequestBatch(p0));
    }

    public static java.util.List<com.facebook.Response> executeBatchAndWait(com.facebook.Request[] p0)
    {
      Validate.notNull(p0, "requests");
      return executeBatchAndWait(Arrays.asList(p0));
    }

    public static com.facebook.RequestAsyncTask executeBatchAsync(com.facebook.RequestBatch p0)
    {
      com.facebook.RequestAsyncTask v1;
      Validate.notEmptyAndContainsNoNulls(p0, "requests");
      v1 = new com.facebook.RequestAsyncTask(p0);
      v1.executeOnSettingsExecutor();
      return v1;
    }

    public static com.facebook.RequestAsyncTask executeBatchAsync(java.util.Collection<com.facebook.Request> p0)
    {
      return executeBatchAsync(new com.facebook.RequestBatch(p0));
    }

    public static com.facebook.RequestAsyncTask executeBatchAsync(com.facebook.Request[] p0)
    {
      Validate.notNull(p0, "requests");
      return executeBatchAsync(Arrays.asList(p0));
    }

    public static java.util.List<com.facebook.Response> executeConnectionAndWait(
            java.net.HttpURLConnection p0,
            com.facebook.RequestBatch p1)
    {
      java.util.List v2;
      int v3;
      Object[] v4;
      java.util.HashSet v5;
      java.util.Iterator v6;
      com.facebook.Request v7;
      java.util.Iterator i;
      v2 = Response.fromHttpConnection(p0, p1);
      Utility.disconnectQuietly(p0);
      v3 = p1.size();
      if ( v3 != v2.size() )
      {
        v4 = new Object[2];
        v4[0] = Integer.valueOf(v2.size());
        v4[1] = Integer.valueOf(v3);
        throw new com.facebook.FacebookException(String.format("Received %d responses while expecting %d", v4));
      }
      runCallbacks(p1, v2);
      v5 = new java.util.HashSet();
      v6 = p1.iterator();
      while ( v6.hasNext() )
      {
        v7 = (com.facebook.Request)v6.next();
        if ( v7.session != null )
          v5.add(v7.session);
      }
      for ( i = v5.iterator(); i.hasNext(); ((com.facebook.Session)i.next()).extendAccessTokenIfNeeded() )
        ;
      return v2;
    }

    public static java.util.List<com.facebook.Response> executeConnectionAndWait(
            java.net.HttpURLConnection p0,
            java.util.Collection<com.facebook.Request> p1)
    {
      return executeConnectionAndWait(p0, new com.facebook.RequestBatch(p1));
    }

    public static com.facebook.RequestAsyncTask executeConnectionAsync(
            android.os.Handler p0,
            java.net.HttpURLConnection p1,
            com.facebook.RequestBatch p2)
    {
      com.facebook.RequestAsyncTask v3;
      Validate.notNull(p1, "connection");
      v3 = new com.facebook.RequestAsyncTask(p1, p2);
      p2.setCallbackHandler(p0);
      v3.executeOnSettingsExecutor();
      return v3;
    }

    public static com.facebook.RequestAsyncTask executeConnectionAsync(
            java.net.HttpURLConnection p0,
            com.facebook.RequestBatch p1)
    {
      return executeConnectionAsync(null, p0, p1);
    }

    public static com.facebook.RequestAsyncTask executeGraphPathRequestAsync(
            com.facebook.Session p0,
            String p1,
            com.facebook.Request$Callback p2)
    {
      return newGraphPathRequest(p0, p1, p2).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executeMeRequestAsync(
            com.facebook.Session p0,
            com.facebook.Request$GraphUserCallback p1)
    {
      return newMeRequest(p0, p1).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executeMyFriendsRequestAsync(
            com.facebook.Session p0,
            com.facebook.Request$GraphUserListCallback p1)
    {
      return newMyFriendsRequest(p0, p1).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executePlacesSearchRequestAsync(
            com.facebook.Session p0,
            android.location.Location p1,
            int p2,
            int p3,
            String p4,
            com.facebook.Request$GraphPlaceListCallback p5)
    {
      return newPlacesSearchRequest(p0, p1, p2, p3, p4, p5).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executePostRequestAsync(
            com.facebook.Session p0,
            String p1,
            com.facebook.model.GraphObject p2,
            com.facebook.Request$Callback p3)
    {
      return newPostRequest(p0, p1, p2, p3).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executeStatusUpdateRequestAsync(
            com.facebook.Session p0,
            String p1,
            com.facebook.Request$Callback p2)
    {
      return newStatusUpdateRequest(p0, p1, p2).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executeUploadPhotoRequestAsync(
            com.facebook.Session p0,
            android.graphics.Bitmap p1,
            com.facebook.Request$Callback p2)
    {
      return newUploadPhotoRequest(p0, p1, p2).executeAsync();
    }

    public static com.facebook.RequestAsyncTask executeUploadPhotoRequestAsync(
            com.facebook.Session p0,
            java.io.File p1,
            com.facebook.Request$Callback p2)
 throws java.io.FileNotFoundException {
      return newUploadPhotoRequest(p0, p1, p2).executeAsync();
    }

    private static String getBatchAppId(com.facebook.RequestBatch p0)
    {
      java.util.Iterator v3;
      com.facebook.Session session;
      if ( !Utility.isNullOrEmpty(p0.getBatchApplicationId()) )
        return p0.getBatchApplicationId();
      v3 = p0.iterator();
      while ( v3.hasNext() )
      {
        session = ((com.facebook.Request)v3.next()).session;
        if ( session != null )
          return session.getApplicationId();
      }
      return defaultBatchApplicationId;
    }

    public static final String getDefaultBatchApplicationId()
    {
      return defaultBatchApplicationId;
    }

    private String getGraphPathWithVersion()
    {
      Object[] v3;
      if ( versionPattern.matcher(this.graphPath).matches() )
        return this.graphPath;
      v3 = new Object[2];
      v3[0] = this.version;
      v3[1] = this.graphPath;
      return String.format("%s/%s", v3);
    }

    private static String getMimeContentType()
    {
      Object[] v0;
      v0 = new Object[1];
      v0[0] = "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f";
      return String.format("multipart/form-data; boundary=%s", v0);
    }

    private static String getUserAgent()
    {
      String v0;
      Object[] v1;
      v0 = userAgent;
      if ( v0 == null )
      {
        v1 = new Object[2];
        v1[0] = "FBAndroidSDK";
        v1[1] = "3.23.0";
        userAgent = String.format("%s.%s", v1);
      }
      return userAgent;
    }

    private static boolean hasOnProgressCallbacks(com.facebook.RequestBatch p0)
    {
      java.util.Iterator v1;
      java.util.Iterator v4;
      v1 = p0.getCallbacks().iterator();
      while ( v1.hasNext() )
      {
        if ( ((com.facebook.RequestBatch$Callback)v1.next()) instanceof com.facebook.RequestBatch$OnProgressCallback )
          return true;
      }
      v4 = p0.iterator();
      while ( v4.hasNext() )
      {
        if ( ((com.facebook.Request)v4.next()).getCallback() instanceof com.facebook.Request$OnProgressCallback )
          return true;
      }
      return false;
    }

    private static boolean isGzipCompressible(com.facebook.RequestBatch p0)
    {
      java.util.Iterator v1;
      com.facebook.Request v2;
      java.util.Iterator v3;
      v1 = p0.iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.facebook.Request)v1.next();
        v3 = v2.parameters.keySet().iterator();
        while ( v3.hasNext() )
        {
          if ( isSupportedAttachmentType(v2.parameters.get((String)v3.next())) )
            return false;
        }
      }
      return true;
    }

    private static boolean isMeRequest(String p0)
    {
      boolean v1;
      java.util.regex.Matcher v2;
      v1 = true;
      v2 = versionPattern.matcher(p0);
      if ( v2.matches() )
        p0 = v2.group(1);
      if ( !p0.startsWith("me/") && !p0.startsWith("/me/") )
        return false;
      return v1;
    }

    private static boolean isSupportedAttachmentType(Object p0)
    {
      return p0 instanceof android.graphics.Bitmap
          || p0 instanceof byte[]
          || p0 instanceof android.os.ParcelFileDescriptor
          || p0 instanceof com.facebook.Request$ParcelFileDescriptorWithMimeType;
    }

    private static boolean isSupportedParameterType(Object p0)
    {
      return p0 instanceof String || p0 instanceof Boolean || p0 instanceof Number || p0 instanceof java.util.Date;
    }

    public static com.facebook.Request newCustomAudienceThirdPartyIdRequest(
            com.facebook.Session p0,
            android.content.Context p1,
            com.facebook.Request$Callback p2)
    {
      return newCustomAudienceThirdPartyIdRequest(p0, p1, null, p2);
    }

    public static com.facebook.Request newCustomAudienceThirdPartyIdRequest(
            com.facebook.Session p0,
            android.content.Context p1,
            String p2,
            com.facebook.Request$Callback p3)
    {
      com.facebook.Session ActiveSession;
      Object v5;
      com.facebook.internal.AttributionIdentifiers AttributionIdentifiers = null; // RETVAL
      com.facebook.internal.AttributionIdentifiers v7;
      android.os.Bundle v8;
      String v9;
      if ( p0 != null )
        ActiveSession = p0;
      else
        ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null && !ActiveSession.isOpened() )
        ActiveSession = null;
      if ( p2 == null )
      {
        if ( ActiveSession != null )
          p2 = ActiveSession.getApplicationId();
        else
          p2 = Utility.getMetadataApplicationId(p1);
      }
      if ( p2 == null )
        throw new com.facebook.FacebookException("Facebook App ID cannot be determined");
      v5 = p2 + "/custom_audience_third_party_id";
      AttributionIdentifiers = AttributionIdentifiers.getAttributionIdentifiers(p1);
      v7 = AttributionIdentifiers;
      v8 = new android.os.Bundle();
      if ( ActiveSession == null )
      {
        v9 = AttributionIdentifiers.getAttributionId() != null ? v7.getAttributionId() : v7.getAndroidAdvertiserId();
        if ( v7.getAttributionId() != null )
          v8.putString("udid", v9);
      }
      if ( Settings.getLimitEventAndDataUsage(p1) || v7.isTrackingLimited() )
        v8.putString("limit_event_usage", "1");
      return new com.facebook.Request(ActiveSession, (String)v5, v8, HttpMethod.GET, p3);
    }

    public static com.facebook.Request newDeleteObjectRequest(
            com.facebook.Session p0,
            String p1,
            com.facebook.Request$Callback p2)
    {
      return new com.facebook.Request(p0, p1, null, HttpMethod.DELETE, p2);
    }

    public static com.facebook.Request newGraphPathRequest(
            com.facebook.Session p0,
            String p1,
            com.facebook.Request$Callback p2)
    {
      return new com.facebook.Request(p0, p1, null, null, p2);
    }

    public static com.facebook.Request newMeRequest(
            com.facebook.Session p0,
            com.facebook.Request$GraphUserCallback p1)
    {
      return new com.facebook.Request(p0, "me", null, null, (com.facebook.Request$Callback)new com.facebook.Request$1(p1));
    }

    public static com.facebook.Request newMyFriendsRequest(
            com.facebook.Session p0,
            com.facebook.Request$GraphUserListCallback p1)
    {
      return new com.facebook.Request(p0, "me/friends", null, null, (com.facebook.Request$Callback)new com.facebook.Request$2(p1));
    }

    public static com.facebook.Request newPlacesSearchRequest(
            com.facebook.Session p0,
            android.location.Location p1,
            int p2,
            int p3,
            String p4,
            com.facebook.Request$GraphPlaceListCallback p5)
    {
      android.os.Bundle v6;
      Object[] v7;
      if ( p1 == null && Utility.isNullOrEmpty(p4) )
        throw new com.facebook.FacebookException("Either location or searchText must be specified.");
      v6 = new android.os.Bundle(5);
      v6.putString("type", "place");
      v6.putInt("limit", p3);
      if ( p1 != null )
      {
        v7 = new Object[2];
        v7[0] = Double.valueOf(p1.getLatitude());
        v7[1] = Double.valueOf(p1.getLongitude());
        v6.putString("center", String.format(Locale.US, "%f,%f", v7));
        v6.putInt("distance", p2);
      }
      if ( !Utility.isNullOrEmpty(p4) )
        v6.putString("q", p4);
      return new com.facebook.Request(p0, "search", v6, HttpMethod.GET, (com.facebook.Request$Callback)new com.facebook.Request$3(p5));
    }

    public static com.facebook.Request newPostOpenGraphActionRequest(
            com.facebook.Session p0,
            com.facebook.model.OpenGraphAction p1,
            com.facebook.Request$Callback p2)
    {
      Object[] v3;
      if ( p1 == null )
        throw new com.facebook.FacebookException("openGraphAction cannot be null");
      if ( Utility.isNullOrEmpty(p1.getType()) )
        throw new com.facebook.FacebookException("openGraphAction must have non-null 'type' property");
      v3 = new Object[1];
      v3[0] = p1.getType();
      return newPostRequest(p0, String.format("me/%s", v3), (com.facebook.model.GraphObject)p1, p2);
    }

    public static com.facebook.Request newPostOpenGraphObjectRequest(
            com.facebook.Session p0,
            com.facebook.model.OpenGraphObject p1,
            com.facebook.Request$Callback p2)
    {
      Object[] v3;
      String v4;
      android.os.Bundle v5;
      if ( p1 == null )
        throw new com.facebook.FacebookException("openGraphObject cannot be null");
      if ( Utility.isNullOrEmpty(p1.getType()) )
        throw new com.facebook.FacebookException("openGraphObject must have non-null 'type' property");
      if ( Utility.isNullOrEmpty(p1.getTitle()) )
        throw new com.facebook.FacebookException("openGraphObject must have non-null 'title' property");
      v3 = new Object[1];
      v3[0] = p1.getType();
      v4 = String.format("me/objects/%s", v3);
      v5 = new android.os.Bundle();
      v5.putString("object", p1.getInnerJSONObject().toString());
      return new com.facebook.Request(p0, v4, v5, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newPostOpenGraphObjectRequest(
            com.facebook.Session p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            com.facebook.model.GraphObject p6,
            com.facebook.Request$Callback p7)
    {
      com.facebook.model.OpenGraphObject v8; // RETVAL
    
      v8 = OpenGraphObject$Factory.createForPost(com.facebook.model.OpenGraphObject.class, p1, p2, p3, p4, p5);
      if ( p6 != null )
        v8.setData(p6);
      return newPostOpenGraphObjectRequest(p0, v8, p7);
    }

    public static com.facebook.Request newPostRequest(
            com.facebook.Session p0,
            String p1,
            com.facebook.model.GraphObject p2,
            com.facebook.Request$Callback p3)
    {
      com.facebook.Request v4;
      v4 = new com.facebook.Request(p0, p1, null, HttpMethod.POST, p3);
      v4.graphObject = p2;
      return v4;
    }

    public static com.facebook.Request newStatusUpdateRequest(
            com.facebook.Session p0,
            String p1,
            com.facebook.Request$Callback p2)
    {
      return newStatusUpdateRequest(p0, p1, (com.facebook.model.GraphPlace)null, (java.util.List<com.facebook.model.GraphUser>)null, p2);
    }

    public static com.facebook.Request newStatusUpdateRequest(
            com.facebook.Session p0,
            String p1,
            com.facebook.model.GraphPlace p2,
            java.util.List<com.facebook.model.GraphUser> p3,
            com.facebook.Request$Callback p4)
    {
      java.util.List v5;
      java.util.Iterator i;
      String Id;
      if ( p3 != null )
      {
        v5 = new java.util.ArrayList(p3.size());
        for ( i = p3.iterator(); i.hasNext(); v5.add(((com.facebook.model.GraphUser)i.next()).getId()) )
          ;
      }
      else
      {
        v5 = null;
      }
      if ( p2 != null )
        Id = p2.getId();
      else
        Id = null;
      return newStatusUpdateRequest(p0, p1, Id, v5, p4);
    }

    private static com.facebook.Request newStatusUpdateRequest(
            com.facebook.Session p0,
            String p1,
            String p2,
            java.util.List<String> p3,
            com.facebook.Request$Callback p4)
    {
      android.os.Bundle v5;
      v5 = new android.os.Bundle();
      v5.putString("message", p1);
      if ( p2 != null )
        v5.putString("place", p2);
      if ( p3 != null && p3.size() > 0 )
        v5.putString("tags", TextUtils.join(",", p3));
      return new com.facebook.Request(p0, "me/feed", v5, HttpMethod.POST, p4);
    }

    public static com.facebook.Request newUpdateOpenGraphObjectRequest(
            com.facebook.Session p0,
            com.facebook.model.OpenGraphObject p1,
            com.facebook.Request$Callback p2)
    {
      String Id;
      android.os.Bundle v4;
      if ( p1 == null )
        throw new com.facebook.FacebookException("openGraphObject cannot be null");
      Id = p1.getId();
      if ( Id == null )
        throw new com.facebook.FacebookException("openGraphObject must have an id");
      v4 = new android.os.Bundle();
      v4.putString("object", p1.getInnerJSONObject().toString());
      return new com.facebook.Request(p0, Id, v4, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newUpdateOpenGraphObjectRequest(
            com.facebook.Session p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            com.facebook.model.GraphObject p6,
            com.facebook.Request$Callback p7)
    {
      com.facebook.model.OpenGraphObject v8; // RETVAL
    
      v8 = OpenGraphObject$Factory.createForPost(com.facebook.model.OpenGraphObject.class, null, p2, p3, p4, p5);
      v8.setId(p1);
      v8.setData(p6);
      return newUpdateOpenGraphObjectRequest(p0, v8, p7);
    }

    public static com.facebook.Request newUploadPhotoRequest(
            com.facebook.Session p0,
            android.graphics.Bitmap p1,
            com.facebook.Request$Callback p2)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(1);
      v3.putParcelable("picture", p1);
      return new com.facebook.Request(p0, "me/photos", v3, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newUploadPhotoRequest(
            com.facebook.Session p0,
            java.io.File p1,
            com.facebook.Request$Callback p2)
 throws java.io.FileNotFoundException {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(1);
      v3.putParcelable("picture", ParcelFileDescriptor.open(p1, 0x10000000));
      return new com.facebook.Request(p0, "me/photos", v3, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newUploadStagingResourceWithImageRequest(
            com.facebook.Session p0,
            android.graphics.Bitmap p1,
            com.facebook.Request$Callback p2)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(1);
      v3.putParcelable("file", p1);
      return new com.facebook.Request(p0, "me/staging_resources", v3, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newUploadStagingResourceWithImageRequest(
            com.facebook.Session p0,
            java.io.File p1,
            com.facebook.Request$Callback p2)
 throws java.io.FileNotFoundException {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(1);
      v3.putParcelable("file", (android.os.Parcelable)new com.facebook.Request$ParcelFileDescriptorWithMimeType(ParcelFileDescriptor.open(p1, 0x10000000), "image/png"));
      return new com.facebook.Request(p0, "me/staging_resources", v3, HttpMethod.POST, p2);
    }

    public static com.facebook.Request newUploadVideoRequest(
            com.facebook.Session p0,
            java.io.File p1,
            com.facebook.Request$Callback p2)
 throws java.io.FileNotFoundException {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(1);
      v3.putParcelable(p1.getName(), ParcelFileDescriptor.open(p1, 0x10000000));
      return new com.facebook.Request(p0, "me/videos", v3, HttpMethod.POST, p2);
    }

    private static String parameterToString(Object p0)
    {
      if ( p0 instanceof String )
        return (String)p0;
      if ( p0 instanceof Boolean || p0 instanceof Number )
        return p0.toString();
      if ( !(p0 instanceof java.util.Date) )
        throw new IllegalArgumentException("Unsupported parameter type.");
      return new java.text.SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ssZ", Locale.US).format(p0);
    }

    private static void processGraphObject(
            com.facebook.model.GraphObject p0,
            String p1,
            com.facebook.Request$KeyValueSerializer p2)
 throws java.io.UnsupportedEncodingException, java.io.IOException {
      int v3;
      int v4; // RETVAL
      boolean v5;
      boolean v6;
      java.util.Iterator v7;
      java.util.Map.Entry v8;
      boolean v9;
      if ( isMeRequest(p1) )
      {
        v3 = p1.indexOf(":");
        v4 = p1.indexOf("?");
        v5 = v3 > 3 && (v4 == -1 || v3 < v4);
        v6 = v5;
      }
      else
      {
        v6 = false;
      }
      v7 = p0.asMap().entrySet().iterator();
      while ( v7.hasNext() )
      {
        v8 = (java.util.Map.Entry)v7.next();
        v9 = v6 && ((String)v8.getKey()).equalsIgnoreCase("image");
        processGraphObjectProperty((String)v8.getKey(), v8.getValue(), p2, v9);
      }
    }

    private static void processGraphObjectProperty(
            String p0,
            Object p1,
            com.facebook.Request$KeyValueSerializer p2,
            boolean p3)
 throws java.io.UnsupportedEncodingException, java.io.IOException {
      Class Class;
      org.json.JSONObject InnerJSONObject;
      Class v6;
      Object v7;
      org.json.JSONObject v8;
      java.util.Iterator v9;
      String v10;
      Object[] v11;
      org.json.JSONArray v12;
      int v13;
      int i;
      Object[] v15;
      Class = p1.getClass();
      if ( com.facebook.model.GraphObject.class.isAssignableFrom(Class) )
      {
        InnerJSONObject = ((com.facebook.model.GraphObject)p1).getInnerJSONObject();
        v6 = InnerJSONObject.getClass();
        v7 = InnerJSONObject;
      }
      else
      {
        if ( com.facebook.model.GraphObjectList.class.isAssignableFrom(Class) )
        {
          p1 = ((com.facebook.model.GraphObjectList)p1).getInnerJSONArray();
          v6 = p1.getClass();
        }
        else
        {
          v6 = Class;
        }
        v7 = p1;
      }
      if ( org.json.JSONObject.class.isAssignableFrom(v6) )
      {
        v8 = (org.json.JSONObject)v7;
        if ( p3 )
        {
          v9 = v8.keys();
          while ( v9.hasNext() )
          {
            v10 = (String)v9.next();
            v11 = new Object[2];
            v11[0] = p0;
            v11[1] = v10;
            Request.processGraphObjectProperty(String.format("%s[%s]", v11), v8.opt(v10), p2, p3);
          }
        }
        else if ( v8.has("id") )
        {
          Request.processGraphObjectProperty(p0, v8.optString("id"), p2, false);
        }
        else if ( v8.has("url") )
        {
          Request.processGraphObjectProperty(p0, v8.optString("url"), p2, false);
        }
        else if ( v8.has("fbsdk:create_object") )
        {
          Request.processGraphObjectProperty(p0, v8.toString(), p2, false);
        }
      }
      else if ( org.json.JSONArray.class.isAssignableFrom(v6) )
      {
        v12 = (org.json.JSONArray)v7;
        v13 = v12.length();
        for ( i = 0; i < v13; ++i )
        {
          v15 = new Object[2];
          v15[0] = p0;
          v15[1] = Integer.valueOf(i);
          Request.processGraphObjectProperty(String.format("%s[%d]", v15), v12.opt(i), p2, p3);
        }
      }
      else if ( String.class.isAssignableFrom(v6) || Number.class.isAssignableFrom(v6) || Boolean.class.isAssignableFrom(v6) )
      {
        p2.writeString(p0, v7.toString());
      }
      else if ( java.util.Date.class.isAssignableFrom(v6) )
      {
        p2.writeString(p0, new java.text.SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ssZ", Locale.US).format((java.util.Date)v7));
      }
    }

    private static void processRequest(
            com.facebook.RequestBatch p0,
            com.facebook.internal.Logger p1,
            int p2,
            java.net.URL p3,
            java.io.OutputStream p4,
            boolean p5)
 throws java.io.IOException, org.json.JSONException {
      com.facebook.Request$Serializer v6;
      com.facebook.Request v7;
      java.util.Map v8;
      java.util.Iterator v9;
      String v10;
      Object v11;
      String BatchAppId;
      java.util.Map v13;
      v6 = new com.facebook.Request$Serializer(p4, p1, p5);
      if ( p2 == 1 )
      {
        v7 = p0.get(0);
        v8 = new java.util.HashMap();
        v9 = v7.parameters.keySet().iterator();
        while ( v9.hasNext() )
        {
          v10 = (String)v9.next();
          v11 = v7.parameters.get(v10);
          if ( isSupportedAttachmentType(v11) )
            v8.put(v10, new com.facebook.Request$Attachment(v7, v11));
        }
        if ( p1 != null )
          p1.append("  Parameters:\n");
        serializeParameters(v7.parameters, v6, v7);
        if ( p1 != null )
          p1.append("  Attachments:\n");
        serializeAttachments(v8, v6);
        if ( v7.graphObject != null )
          processGraphObject(v7.graphObject, p3.getPath(), (com.facebook.Request$KeyValueSerializer)v6);
      }
      else
      {
        BatchAppId = getBatchAppId(p0);
        if ( Utility.isNullOrEmpty(BatchAppId) )
          throw new com.facebook.FacebookException("At least one request in a batch must have an open Session, or a default a" +
                                                   "pp ID must be specified.");
        v6.writeString("batch_app_id", BatchAppId);
        v13 = new java.util.HashMap();
        serializeRequestsAsJSON(v6, p0, v13);
        if ( p1 != null )
          p1.append("  Attachments:\n");
        serializeAttachments(v13, v6);
      }
    }

    static void runCallbacks(com.facebook.RequestBatch p0, java.util.List<com.facebook.Response> p1)
    {
      int v2;
      java.util.ArrayList v3;
      int i;
      com.facebook.Request v5; // RETVAL
      Runnable v6;
      android.os.Handler CallbackHandler; // RETVAL
    
      v2 = p0.size();
      v3 = new java.util.ArrayList();
      for ( i = 0; i < v2; ++i )
      {
        v5 = p0.get(i);
        if ( v5.callback != null )
          v3.add(new android.util.Pair(v5.callback, p1.get(i)));
      }
      if ( v3.size() > 0 )
      {
        v6 = (Runnable)new com.facebook.Request$4(v3, p0);
        CallbackHandler = p0.getCallbackHandler();
        if ( CallbackHandler != null )
          CallbackHandler.post(v6);
        else
          v6.run();
      }
    }

    private static void serializeAttachments(
            java.util.Map<String, com.facebook.Request$Attachment> p0,
            com.facebook.Request$Serializer p1)
 throws java.io.IOException {
      java.util.Iterator v2;
      String v3;
      com.facebook.Request$Attachment v4;
      v2 = p0.keySet().iterator();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v4 = (com.facebook.Request$Attachment)p0.get(v3);
        if ( isSupportedAttachmentType(v4.getValue()) )
          p1.writeObject(v3, v4.getValue(), v4.getRequest());
      }
    }

    private static void serializeParameters(
            android.os.Bundle p0,
            com.facebook.Request$Serializer p1,
            com.facebook.Request p2)
 throws java.io.IOException {
      java.util.Iterator v3;
      String v4;
      Object v5;
      v3 = p0.keySet().iterator();
      while ( v3.hasNext() )
      {
        v4 = (String)v3.next();
        v5 = p0.get(v4);
        if ( isSupportedParameterType(v5) )
          p1.writeObject(v4, v5, p2);
      }
    }

    private static void serializeRequestsAsJSON(
            com.facebook.Request$Serializer p0,
            java.util.Collection<com.facebook.Request> p1,
            java.util.Map<String, com.facebook.Request$Attachment> p2)
 throws org.json.JSONException, java.io.IOException {
      org.json.JSONArray v3;
      java.util.Iterator i;
      v3 = new org.json.JSONArray();
      for ( i = p1.iterator(); i.hasNext(); ((com.facebook.Request)i.next()).serializeToBatch(v3, p2) )
        ;
      p0.writeRequestsAsJson("batch", v3, p1);
    }

    private void serializeToBatch(org.json.JSONArray p0, java.util.Map<String, com.facebook.Request$Attachment> p1)
 throws org.json.JSONException, java.io.UnsupportedEncodingException, java.io.IOException {
      org.json.JSONObject v3;
      String UrlForBatchedRequest;
      java.util.ArrayList v5;
      java.util.Iterator v6;
      Object v7;
      Object[] v8;
      String v9;
      java.util.ArrayList v10;
      v3 = new org.json.JSONObject();
      if ( this.batchEntryName != null )
      {
        v3.put("name", this.batchEntryName);
        v3.put("omit_response_on_success", this.batchEntryOmitResultOnSuccess);
      }
      if ( this.batchEntryDependsOn != null )
        v3.put("depends_on", this.batchEntryDependsOn);
      UrlForBatchedRequest = this.getUrlForBatchedRequest();
      v3.put("relative_url", UrlForBatchedRequest);
      v3.put("method", this.httpMethod);
      if ( this.session != null )
        Logger.registerAccessToken(this.session.getAccessToken());
      v5 = new java.util.ArrayList();
      v6 = this.parameters.keySet().iterator();
      while ( v6.hasNext() )
      {
        v7 = this.parameters.get((String)v6.next());
        if ( isSupportedAttachmentType(v7) )
        {
          v8 = new Object[2];
          v8[0] = "file";
          v8[1] = Integer.valueOf(p1.size());
          v9 = String.format("%s%d", v8);
          v5.add(v9);
          p1.put(v9, new com.facebook.Request$Attachment(this, v7));
        }
      }
      if ( !v5.isEmpty() )
        v3.put("attached_files", TextUtils.join(",", v5));
      if ( this.graphObject != null )
      {
        v10 = new java.util.ArrayList();
        processGraphObject(
          this.graphObject,
          UrlForBatchedRequest,
          (com.facebook.Request$KeyValueSerializer)new com.facebook.Request$5(this, v10));
        v3.put("body", TextUtils.join("&", v10));
      }
      p0.put(v3);
    }

    static final void serializeToUrlConnection(com.facebook.RequestBatch p0, java.net.HttpURLConnection p1)
    {
      com.facebook.internal.Logger v2 = null;
      int v3 = 0;
      boolean v4 = false;
      com.facebook.HttpMethod httpMethod = null;
      java.net.URL URL = null;
      com.facebook.HttpMethod v7 = null;
      java.io.OutputStream v8 = null;
      com.facebook.ProgressNoopOutputStream v9 = null;
      com.facebook.ProgressOutputStream v10 = null;
      java.io.OutputStream v11 = null;
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v2 = new com.facebook.internal.Logger(LoggingBehavior.REQUESTS, "Request");
              v3 = p0.size();
              v4 = isGzipCompressible(p0);
              if ( v3 == 1 )
              httpMethod = p0.get(0).httpMethod;
              else
              httpMethod = HttpMethod.POST;
              p1.setRequestMethod(httpMethod.name());
              setConnectionContentType(p1, v4);
              URL = p1.getURL();
              v2.append("Request:\n");
              v2.appendKeyValue("Id", p0.getId());
              v2.appendKeyValue("URL", URL);
              v2.appendKeyValue("Method", p1.getRequestMethod());
              v2.appendKeyValue("User-Agent", p1.getRequestProperty("User-Agent"));
              v2.appendKeyValue("Content-Type", p1.getRequestProperty("Content-Type"));
              p1.setConnectTimeout(p0.getTimeout());
              p1.setReadTimeout(p0.getTimeout());
              v7 = HttpMethod.POST;
              if ( httpMethod != v7 )
              {
              v2.log();
              return;
              }
              p1.setDoOutput(true);
              _ehCatchPc = 1;
              v8 = new java.io.BufferedOutputStream(p1.getOutputStream());
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v8 != null )
              v8.close();
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 6;
              if ( v4 )
              v8 = new java.util.zip.GZIPOutputStream(v8);
              if ( hasOnProgressCallbacks(p0) )
              {
              v9 = new com.facebook.ProgressNoopOutputStream(p0.getCallbackHandler());
              processRequest(p0, null, v3, URL, v9, v4);
              v10 = new com.facebook.ProgressOutputStream(v8, p0, v9.getProgressMap(), v9.getMaxProgress());
              { _pc = 8; continue _sm; }
              }
              v11 = v8;
              _pc = 5;
              continue _sm;
            case 5:
              try
              {
              processRequest(p0, v2, v3, URL, v11, v4);
              }
              catch ( Throwable v12 )
              {
              v8 = v11;
              { _pc = 2; continue _sm; }
              }
              
              v11.close();
              v2.log();
              return;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 7; continue _sm; }
              _pc = 2;
              continue _sm;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              v11 = v10;
              _pc = 5;
              continue _sm;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    private static void setConnectionContentType(java.net.HttpURLConnection p0, boolean p1)
    {
      if ( p1 )
      {
        p0.setRequestProperty("Content-Type", "application/x-www-form-urlencoded");
        p0.setRequestProperty("Content-Encoding", "gzip");
      }
      else
      {
        p0.setRequestProperty("Content-Type", getMimeContentType());
      }
    }

    public static final void setDefaultBatchApplicationId(String p0)
    {
      defaultBatchApplicationId = p0;
    }

    public static java.net.HttpURLConnection toHttpConnection(com.facebook.RequestBatch p0)
    {
      java.net.URL v1 = null;
      java.net.HttpURLConnection Connection;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            if ( p0.size() == 1 )
            {
            v1 = new java.net.URL(p0.get(0).getUrlForSingleRequest());
            { _pc = 1; continue _sm; }
            }
            v1 = new java.net.URL(ServerProtocol.getGraphUrlBase());
            }
            catch ( java.net.MalformedURLException v4 )
            {
            throw new com.facebook.FacebookException("could not construct URL for request", v4);
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            try
            {
            Connection = createConnection(v1);
            serializeToUrlConnection(p0, Connection);
            return Connection;
            }
            catch ( java.io.IOException v5 )
            {
            throw new com.facebook.FacebookException("could not construct request body", v5);
            }
            

          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public static java.net.HttpURLConnection toHttpConnection(java.util.Collection<com.facebook.Request> p0)
    {
      Validate.notEmptyAndContainsNoNulls(p0, "requests");
      return toHttpConnection(new com.facebook.RequestBatch(p0));
    }

    public static java.net.HttpURLConnection toHttpConnection(com.facebook.Request[] p0)
    {
      return toHttpConnection(Arrays.asList(p0));
    }

    private static <T extends com.facebook.model.GraphObject> java.util.List<T> typedListFromResponse(
            com.facebook.Response p0,
            Class<T> p1)
    {
      com.facebook.model.GraphMultiResult v2;
      com.facebook.model.GraphObjectList Data; // RETVAL
    
      v2 = (com.facebook.model.GraphMultiResult)p0.getGraphObjectAs(com.facebook.model.GraphMultiResult.class);
      if ( v2 == null )
        return null;
      Data = v2.getData();
      if ( Data != null )
        return (java.util.List)Data.castToListOf(p1);
      else
        return null;
    }

    public final com.facebook.Response executeAndWait()
    {
      return executeAndWait(this);
    }

    public final com.facebook.RequestAsyncTask executeAsync()
    {
      com.facebook.Request[] v1;
      v1 = new com.facebook.Request[1];
      v1[0] = this;
      return executeBatchAsync(v1);
    }

    public final String getBatchEntryDependsOn()
    {
      return this.batchEntryDependsOn;
    }

    public final String getBatchEntryName()
    {
      return this.batchEntryName;
    }

    public final boolean getBatchEntryOmitResultOnSuccess()
    {
      return this.batchEntryOmitResultOnSuccess;
    }

    public final com.facebook.Request$Callback getCallback()
    {
      return this.callback;
    }

    public final com.facebook.model.GraphObject getGraphObject()
    {
      return this.graphObject;
    }

    public final String getGraphPath()
    {
      return this.graphPath;
    }

    public final com.facebook.HttpMethod getHttpMethod()
    {
      return this.httpMethod;
    }

    public final android.os.Bundle getParameters()
    {
      return this.parameters;
    }

    public final com.facebook.Session getSession()
    {
      return this.session;
    }

    public final Object getTag()
    {
      return this.tag;
    }

    final String getUrlForBatchedRequest()
    {
      String GraphPathWithVersion; // RETVAL
    
      if ( this.overriddenURL != null )
        throw new com.facebook.FacebookException("Can't override URL for a batch request");
      GraphPathWithVersion = this.getGraphPathWithVersion();
      this.addCommonParameters();
      return this.appendParametersToBaseUrl(GraphPathWithVersion);
    }

    final String getUrlForSingleRequest()
    {
      String GraphVideoUrlBase;
      Object[] v4;
      String v5; // RETVAL
    
      if ( this.overriddenURL != null )
        return this.overriddenURL.toString();
      if ( this.getHttpMethod() == HttpMethod.POST && this.graphPath != null && this.graphPath.endsWith("/videos") )
        GraphVideoUrlBase = ServerProtocol.getGraphVideoUrlBase();
      else
        GraphVideoUrlBase = ServerProtocol.getGraphUrlBase();
      v4 = new Object[2];
      v4[0] = GraphVideoUrlBase;
      v4[1] = this.getGraphPathWithVersion();
      v5 = String.format("%s/%s", v4);
      this.addCommonParameters();
      return this.appendParametersToBaseUrl(v5);
    }

    public final String getVersion()
    {
      return this.version;
    }

    public final void setBatchEntryDependsOn(String p0)
    {
      this.batchEntryDependsOn = p0;
    }

    public final void setBatchEntryName(String p0)
    {
      this.batchEntryName = p0;
    }

    public final void setBatchEntryOmitResultOnSuccess(boolean p0)
    {
      this.batchEntryOmitResultOnSuccess = p0;
    }

    public final void setCallback(com.facebook.Request$Callback p0)
    {
      this.callback = p0;
    }

    public final void setGraphObject(com.facebook.model.GraphObject p0)
    {
      this.graphObject = p0;
    }

    public final void setGraphPath(String p0)
    {
      this.graphPath = p0;
    }

    public final void setHttpMethod(com.facebook.HttpMethod p0)
    {
      if ( this.overriddenURL != null && p0 != HttpMethod.GET )
        throw new com.facebook.FacebookException("Can't change HTTP method on request with overridden URL.");
      if ( p0 == null )
        p0 = HttpMethod.GET;
      this.httpMethod = p0;
    }

    public final void setParameters(android.os.Bundle p0)
    {
      this.parameters = p0;
    }

    public final void setSession(com.facebook.Session p0)
    {
      this.session = p0;
    }

    public final void setSkipClientToken(boolean p0)
    {
      this.skipClientToken = p0;
    }

    public final void setTag(Object p0)
    {
      this.tag = p0;
    }

    public final void setVersion(String p0)
    {
      this.version = p0;
    }

    public String toString()
    {
      return "{Request: "
           + " session: "
           + this.session
           + ", graphPath: "
           + this.graphPath
           + ", graphObject: "
           + this.graphObject
           + ", httpMethod: "
           + this.httpMethod
           + ", parameters: "
           + this.parameters
           + "}";
    }

}
