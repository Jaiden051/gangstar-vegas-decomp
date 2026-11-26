// Decompiled from classes.dex (SourceFile: Response.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.GraphObject$Factory;
import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
import com.facebook.model.GraphObject;
import org.json.JSONObject;
public class Response {
    // Fields
    static final boolean $assertionsDisabled;
    private static java.lang.String BODY_KEY;
    private static java.lang.String CODE_KEY;
    private static int INVALID_SESSION_FACEBOOK_ERROR_CODE;
    public static java.lang.String NON_JSON_RESPONSE_PROPERTY;
    private static java.lang.String RESPONSE_CACHE_TAG;
    private static java.lang.String RESPONSE_LOG_TAG;
    public static java.lang.String SUCCESS_KEY;
    private static com.facebook.internal.FileLruCache responseCache;
    private final java.net.HttpURLConnection connection;
    private final com.facebook.FacebookRequestError error;
    private final com.facebook.model.GraphObject graphObject;
    private final com.facebook.model.GraphObjectList graphObjectList;
    private final boolean isFromCache;
    private final java.lang.String rawResponse;
    private final com.facebook.Request request;

    // Methods
    static
    {
      $assertionsDisabled = !com.facebook.Response.class.desiredAssertionStatus();
    }

    Response(com.facebook.Request p0, java.net.HttpURLConnection p1, com.facebook.FacebookRequestError p2)
    {
      this(p0, p1, null, null, null, false, p2);
    }

    Response(
            com.facebook.Request p0,
            java.net.HttpURLConnection p1,
            String p2,
            com.facebook.model.GraphObject p3,
            com.facebook.model.GraphObjectList<com.facebook.model.GraphObject> p4,
            boolean p5,
            com.facebook.FacebookRequestError p6)
    {
      super();
      this.request = p0;
      this.connection = p1;
      this.rawResponse = p2;
      this.graphObject = p3;
      this.graphObjectList = p4;
      this.isFromCache = p5;
      this.error = p6;
    }

    Response(
            com.facebook.Request p0,
            java.net.HttpURLConnection p1,
            String p2,
            com.facebook.model.GraphObject p3,
            boolean p4)
    {
      this(p0, p1, p2, p3, null, p4, null);
    }

    Response(
            com.facebook.Request p0,
            java.net.HttpURLConnection p1,
            String p2,
            com.facebook.model.GraphObjectList<com.facebook.model.GraphObject> p3,
            boolean p4)
    {
      this(p0, p1, p2, null, p3, p4, null);
    }

    static java.util.List<com.facebook.Response> constructErrorResponses(
            java.util.List<com.facebook.Request> p0,
            java.net.HttpURLConnection p1,
            com.facebook.FacebookException p2)
    {
      int v3;
      java.util.List v4;
      int i;
      v3 = p0.size();
      v4 = new java.util.ArrayList(v3);
      for ( i = 0; i < v3; ++i )
        v4.add(new com.facebook.Response((com.facebook.Request)p0.get(i), p1, new com.facebook.FacebookRequestError(p1, p2)));
      return v4;
    }

    private static com.facebook.Response createResponseFromObject(
            com.facebook.Request p0,
            java.net.HttpURLConnection p1,
            Object p2,
            boolean p3,
            Object p4)
 throws org.json.JSONException {
      org.json.JSONObject v5;
      com.facebook.FacebookRequestError v6; // RETVAL
      com.facebook.FacebookRequestError v7;
      com.facebook.Session Session; // RETVAL
      Object StringPropertyAsJSON; // RETVAL
    
      if ( p2 instanceof org.json.JSONObject )
      {
        v5 = (org.json.JSONObject)p2;
        v6 = FacebookRequestError.checkResponseAndCreateError(v5, p4, p1);
        v7 = v6;
        if ( v6 != null )
        {
          if ( v6.getErrorCode() == 190 )
          {
            Session = p0.getSession();
            if ( Session != null )
              Session.closeAndClearTokenInformation();
          }
          return new com.facebook.Response(p0, p1, v7);
        }
        StringPropertyAsJSON = Utility.getStringPropertyAsJSON(v5, "body", "FACEBOOK_NON_JSON_RESULT");
        if ( StringPropertyAsJSON instanceof org.json.JSONObject )
          return new com.facebook.Response(p0, p1, StringPropertyAsJSON.toString(), GraphObject$Factory.create((org.json.JSONObject)StringPropertyAsJSON), p3);
        if ( StringPropertyAsJSON instanceof org.json.JSONArray )
          return new com.facebook.Response(p0, p1, StringPropertyAsJSON.toString(), GraphObject$Factory.createList(
                                                                                      (org.json.JSONArray)StringPropertyAsJSON,
                                                                                      com.facebook.model.GraphObject.class), p3);
        p2 = JSONObject.NULL;
      }
      if ( p2 != JSONObject.NULL )
        throw new com.facebook.FacebookException("Got unexpected object type in response, class: "
                                               + p2.getClass().getSimpleName());
      return new com.facebook.Response(p0, p1, p2.toString(), (com.facebook.model.GraphObject)null, p3);
    }

    private static java.util.List<com.facebook.Response> createResponsesFromObject(
            java.net.HttpURLConnection p0,
            java.util.List<com.facebook.Request> p1,
            Object p2,
            boolean p3)
    {
      int v4 = 0;
      int v5 = 0;
      java.util.List v6 = null;
      com.facebook.Request v7 = null;
      org.json.JSONObject v8 = null;
      int ResponseCode = 0;
      org.json.JSONArray v10 = null;
      org.json.JSONArray v13 = null;
      com.facebook.Request v14 = null;
      org.json.JSONException _cv_1 = null;
      java.io.IOException _cv_2 = null;
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
              v4 = 0;
              if ( !$assertionsDisabled && p0 == null && !p3 )
              throw new AssertionError();
              v5 = p1.size();
              v6 = new java.util.ArrayList(v5);
              if ( v5 != 1 )
              { _pc = 3; continue _sm; }
              v7 = (com.facebook.Request)p1.get(0);
              _ehCatchPc = 1;
              v8 = new org.json.JSONObject();
              v8.put("body", p2);
              if ( p0 != null )
              ResponseCode = p0.getResponseCode();
              else
              ResponseCode = 200;
              v8.put("code", ResponseCode);
              v10 = new org.json.JSONArray();
              v10.put(v8);
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 2; continue _sm; }
              _cv_1 = (org.json.JSONException)_ehCaught;
              v6.add(new com.facebook.Response(v7, p0, new com.facebook.FacebookRequestError(p0, _cv_1)));
              v10 = (org.json.JSONArray)p2;
              _pc = 5;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              _cv_2 = (java.io.IOException)_ehCaught;
              v6.add(new com.facebook.Response(v7, p0, new com.facebook.FacebookRequestError(p0, _cv_2)));
              _pc = 3;
              continue _sm;
            case 3:
              v10 = (org.json.JSONArray)p2;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              if ( !(v10 instanceof org.json.JSONArray) || ((org.json.JSONArray)v10).length() != v5 )
              throw new com.facebook.FacebookException("Unexpected number of results");
              v13 = (org.json.JSONArray)v10;
              while ( v4 < v13.length() )
              {
              v14 = (com.facebook.Request)p1.get(v4);
              try
              {
              v6.add(createResponseFromObject(v14, p0, v13.get(v4), p3, p2));
              }
              catch ( org.json.JSONException v15 )
              {
              v6.add(new com.facebook.Response(v14, p0, new com.facebook.FacebookRequestError(p0, v15)));
              }
              catch ( com.facebook.FacebookException v16 )
              {
              v6.add(new com.facebook.Response(v14, p0, new com.facebook.FacebookRequestError(p0, v16)));
              }
              ++v4;
              }
              return v6;
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

    static java.util.List<com.facebook.Response> createResponsesFromStream(
            java.io.InputStream p0,
            java.net.HttpURLConnection p1,
            com.facebook.RequestBatch p2,
            boolean p3)
 throws org.json.JSONException {
      String StreamToString;
      Object[] v5;
      StreamToString = Utility.readStreamToString(p0);
      v5 = new Object[2];
      v5[0] = Integer.valueOf(StreamToString.length());
      v5[1] = StreamToString;
      Logger.log(LoggingBehavior.INCLUDE_RAW_RESPONSES, "Response", "Response (raw)\n  Size: %d\n  Response:\n%s\n", v5);
      return createResponsesFromString(StreamToString, p1, p2, p3);
    }

    static java.util.List<com.facebook.Response> createResponsesFromString(
            String p0,
            java.net.HttpURLConnection p1,
            com.facebook.RequestBatch p2,
            boolean p3)
 throws org.json.JSONException {
      java.util.List ResponsesFromObject;
      Object[] v5;
      ResponsesFromObject = createResponsesFromObject(p1, p2, new org.json.JSONTokener(p0).nextValue(), p3);
      v5 = new Object[3];
      v5[0] = p2.getId();
      v5[1] = Integer.valueOf(p0.length());
      v5[2] = ResponsesFromObject;
      Logger.log(LoggingBehavior.REQUESTS, "Response", "Response\n  Id: %s\n  Size: %d\n  Responses:\n%s\n", v5);
      return ResponsesFromObject;
    }

    static java.util.List<com.facebook.Response> fromHttpConnection(
            java.net.HttpURLConnection p0,
            com.facebook.RequestBatch p1)
    {
      Object v2 = null;
      com.facebook.internal.CacheableRequestBatch v3 = null;
      com.facebook.internal.FileLruCache ResponseCache = null;
      String CacheKeyOverride = null;
      boolean ForceRoundTrip = false; // RETVAL
      boolean isNullOrEmpty = false; // RETVAL
      java.io.InputStream v8 = null; // RETVAL
      java.util.List ResponsesFromStream = null;
      com.facebook.internal.FileLruCache v11 = null;
      String v12 = null;
      java.io.Closeable v13 = null;
      java.io.InputStream ErrorStream = null;
      String v15 = null;
      java.io.InputStream InputStream = null; // RETVAL
      java.io.InputStream v18 = null; // RETVAL
      Object[] v20 = null;
      Object[] v22 = null;
      Object[] v24 = null;
      Object[] v26 = null;
      java.util.List v27 = null; // RETVAL
      java.io.Closeable v29 = null;
      String v30 = null;
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
              v2 = null;
              if ( !(p1 instanceof com.facebook.internal.CacheableRequestBatch) )
              {
              v11 = null;
              v13 = null;
              { _pc = 14; continue _sm; }
              }
              v3 = (com.facebook.internal.CacheableRequestBatch)p1;
              ResponseCache = getResponseCache();
              CacheKeyOverride = v3.getCacheKeyOverride();
              if ( Utility.isNullOrEmpty(CacheKeyOverride) )
              {
              if ( p1.size() == 1 )
              CacheKeyOverride = p1.get(0).getUrlForSingleRequest();
              else
              Logger.log(
              LoggingBehavior.REQUESTS,
              "ResponseCache",
              "Not using cache for cacheable request because no key was specified");
              }
              ForceRoundTrip = v3.getForceRoundTrip();
              if ( ForceRoundTrip || ResponseCache == null || (isNullOrEmpty = Utility.isNullOrEmpty(CacheKeyOverride)) )
              {
              v11 = ResponseCache;
              v30 = CacheKeyOverride;
              v13 = null;
              v2 = v30;
              { _pc = 14; continue _sm; }
              }
              _ehCatchPc = 8;
              v8 = ResponseCache.get(CacheKeyOverride);
              v2 = v8;
              if ( v8 == null )
              {
              Utility.closeQuietly(null);
              v11 = ResponseCache;
              v12 = CacheKeyOverride;
              v13 = null;
              v2 = v12;
              { _pc = 14; continue _sm; }
              }
              _ehCatchPc = 1;
              ResponsesFromStream = createResponsesFromStream(v8, null, p1, true);
              Utility.closeQuietly((java.io.Closeable)v2);
              return ResponsesFromStream;
            case 1:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.facebook.FacebookException) ) { _pc = 3; continue _sm; }
              v29 = v8;
              _pc = 2;
              continue _sm;
            case 2:
              Utility.closeQuietly(v29);
              v2 = CacheKeyOverride;
              v13 = v29;
              v11 = ResponseCache;
              _pc = 7;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof org.json.JSONException || _ehCaught instanceof java.io.IOException) ) { _pc = 5; continue _sm; }
              _pc = 4;
              continue _sm;
            case 4:
              Utility.closeQuietly((java.io.Closeable)v2);
              v11 = ResponseCache;
              v15 = CacheKeyOverride;
              v13 = (java.io.Closeable)v2;
              v2 = v15;
              _pc = 7;
              continue _sm;
            case 5:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 12;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              _ehCatchPc = -1;
              _pc = 14;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.facebook.FacebookException) ) { _pc = 9; continue _sm; }
              v29 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 10; continue _sm; }
              _pc = 4;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 11; continue _sm; }
              _pc = 4;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              _pc = 12;
              continue _sm;
            case 12:
              Utility.closeQuietly((java.io.Closeable)v2);
              throw _cv_1;
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 14:
              try
              {
              try
              {
              if ( p0.getResponseCode() < 400 )
              {
              InputStream = p0.getInputStream();
              ErrorStream = InputStream;
              if ( v11 != null && v2 != null && InputStream != null )
              {
              v18 = v11.interceptAndPut((String)v2, InputStream);
              if ( v18 != null )
              ErrorStream = v18;
              }
              }
              else
              {
              ErrorStream = p0.getErrorStream();
              }
              ResponsesFromStream = createResponsesFromStream(ErrorStream, p0, p1, false);
              Utility.closeQuietly(ErrorStream);
              return ResponsesFromStream;
              }
              catch ( com.facebook.FacebookException v19 )
              {
              v20 = new Object[1];
              v20[0] = v19;
              Logger.log(LoggingBehavior.REQUESTS, "Response", "Response <Error>: %s", v20);
              ResponsesFromStream = constructErrorResponses(p1, p0, v19);
              Utility.closeQuietly(v13);
              return ResponsesFromStream;
              }
              catch ( org.json.JSONException v21 )
              {
              v22 = new Object[1];
              v22[0] = v21;
              Logger.log(LoggingBehavior.REQUESTS, "Response", "Response <Error>: %s", v22);
              ResponsesFromStream = constructErrorResponses(p1, p0, new com.facebook.FacebookException(v21));
              Utility.closeQuietly(v13);
              return ResponsesFromStream;
              }
              catch ( java.io.IOException v23 )
              {
              v24 = new Object[1];
              v24[0] = v23;
              Logger.log(LoggingBehavior.REQUESTS, "Response", "Response <Error>: %s", v24);
              ResponsesFromStream = constructErrorResponses(p1, p0, new com.facebook.FacebookException(v23));
              Utility.closeQuietly(v13);
              return ResponsesFromStream;
              }
              catch ( SecurityException v25 )
              {
              v26 = new Object[1];
              v26[0] = v25;
              Logger.log(LoggingBehavior.REQUESTS, "Response", "Response <Error>: %s", v26);
              v27 = constructErrorResponses(p1, p0, new com.facebook.FacebookException(v25));
              }
              }
              catch ( Throwable v28 )
              {
              Utility.closeQuietly(v13);
              throw v28;
              }
              
              ResponsesFromStream = v27;
              Utility.closeQuietly(v13);
              return ResponsesFromStream;
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

    static com.facebook.internal.FileLruCache getResponseCache()
    {
      android.content.Context StaticContext; // RETVAL
    
      if ( responseCache == null )
      {
        StaticContext = Session.getStaticContext();
        if ( StaticContext != null )
          responseCache = new com.facebook.internal.FileLruCache(StaticContext, "ResponseCache", new com.facebook.internal.FileLruCache$Limits());
      }
      return responseCache;
    }

    public final java.net.HttpURLConnection getConnection()
    {
      return this.connection;
    }

    public final com.facebook.FacebookRequestError getError()
    {
      return this.error;
    }

    public final com.facebook.model.GraphObject getGraphObject()
    {
      return this.graphObject;
    }

    public final <T extends com.facebook.model.GraphObject> T getGraphObjectAs(Class<T> p0)
    {
      if ( this.graphObject == null )
        return null;
      if ( p0 == null )
        throw new NullPointerException("Must pass in a valid interface that extends GraphObject");
      return (T)this.graphObject.cast(p0);
    }

    public final com.facebook.model.GraphObjectList<com.facebook.model.GraphObject> getGraphObjectList()
    {
      return this.graphObjectList;
    }

    public final <T extends com.facebook.model.GraphObject> com.facebook.model.GraphObjectList<T> getGraphObjectListAs(
            Class<T> p0)
    {
      if ( this.graphObjectList != null )
        return this.graphObjectList.castToListOf(p0);
      else
        return null;
    }

    public final boolean getIsFromCache()
    {
      return this.isFromCache;
    }

    public String getRawResponse()
    {
      return this.rawResponse;
    }

    public com.facebook.Request getRequest()
    {
      return this.request;
    }

    public com.facebook.Request getRequestForPagedResults(com.facebook.Response$PagingDirection p0)
    {
      com.facebook.Request v2;
      com.facebook.Response$PagingInfo Paging; // RETVAL
      String Next;
      v2 = null;
      if ( this.graphObject != null
        && (Paging = ((com.facebook.Response$PagedResults)this.graphObject.cast(com.facebook.Response$PagedResults.class)).getPaging()) != null )
      {
        if ( p0 == Response$PagingDirection.NEXT )
          Next = Paging.getNext();
        else
          Next = Paging.getPrevious();
      }
      else
      {
        Next = null;
      }
      if ( !Utility.isNullOrEmpty(Next) && (Next == null || !Next.equals(this.request.getUrlForSingleRequest())) )
      {
        try
        {
          return new com.facebook.Request(this.request.getSession(), new java.net.URL(Next));
        }
        catch ( java.net.MalformedURLException e )
        {
        }
      }
      return v2;
    }

    public String toString()
    {
      Object[] v1;
      int ResponseCode;
      String v3;
      try
      {
        v1 = new Object[1];
        if ( this.connection != null )
          ResponseCode = this.connection.getResponseCode();
        else
          ResponseCode = 200;
        v1[0] = Integer.valueOf(ResponseCode);
        v3 = String.format("%d", v1);
        return "{Response: "
             + " responseCode: "
             + v3
             + ", graphObject: "
             + this.graphObject
             + ", error: "
             + this.error
             + ", isFromCache:"
             + this.isFromCache
             + "}";
      }
      catch ( java.io.IOException e )
      {
        v3 = "unknown";
      }
      return "{Response: "
           + " responseCode: "
           + v3
           + ", graphObject: "
           + this.graphObject
           + ", error: "
           + this.error
           + ", isFromCache:"
           + this.isFromCache
           + "}";
    }

}
