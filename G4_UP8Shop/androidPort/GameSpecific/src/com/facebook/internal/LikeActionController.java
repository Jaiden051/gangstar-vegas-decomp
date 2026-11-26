// Decompiled from classes.dex (SourceFile: LikeActionController.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.os.Looper;
import android.support.v4.content.LocalBroadcastManager;
import android.util.Log;
import com.facebook.AccessToken;
import com.facebook.AppEventsLogger;
import com.facebook.Session;
import com.facebook.SessionState;
import com.facebook.Settings;
import com.facebook.widget.FacebookDialog;
import java.util.UUID;
public class LikeActionController {
    // Fields
    public static java.lang.String ACTION_LIKE_ACTION_CONTROLLER_DID_ERROR;
    public static java.lang.String ACTION_LIKE_ACTION_CONTROLLER_DID_RESET;
    public static java.lang.String ACTION_LIKE_ACTION_CONTROLLER_UPDATED;
    public static java.lang.String ACTION_OBJECT_ID_KEY;
    private static int ERROR_CODE_OBJECT_ALREADY_LIKED;
    public static java.lang.String ERROR_INVALID_OBJECT_ID;
    private static java.lang.String JSON_BOOL_IS_OBJECT_LIKED_KEY;
    private static java.lang.String JSON_BUNDLE_PENDING_CALL_ANALYTICS_BUNDLE;
    private static java.lang.String JSON_INT_VERSION_KEY;
    private static java.lang.String JSON_STRING_LIKE_COUNT_WITHOUT_LIKE_KEY;
    private static java.lang.String JSON_STRING_LIKE_COUNT_WITH_LIKE_KEY;
    private static java.lang.String JSON_STRING_OBJECT_ID_KEY;
    private static java.lang.String JSON_STRING_PENDING_CALL_ID_KEY;
    private static java.lang.String JSON_STRING_SOCIAL_SENTENCE_WITHOUT_LIKE_KEY;
    private static java.lang.String JSON_STRING_SOCIAL_SENTENCE_WITH_LIKE_KEY;
    private static java.lang.String JSON_STRING_UNLIKE_TOKEN_KEY;
    private static java.lang.String LIKE_ACTION_CONTROLLER_STORE;
    private static java.lang.String LIKE_ACTION_CONTROLLER_STORE_OBJECT_SUFFIX_KEY;
    private static java.lang.String LIKE_ACTION_CONTROLLER_STORE_PENDING_OBJECT_ID_KEY;
    private static int LIKE_ACTION_CONTROLLER_VERSION;
    private static java.lang.String LIKE_DIALOG_RESPONSE_LIKE_COUNT_STRING_KEY;
    private static java.lang.String LIKE_DIALOG_RESPONSE_OBJECT_IS_LIKED_KEY;
    private static java.lang.String LIKE_DIALOG_RESPONSE_SOCIAL_SENTENCE_KEY;
    private static java.lang.String LIKE_DIALOG_RESPONSE_UNLIKE_TOKEN_KEY;
    private static int MAX_CACHE_SIZE;
    private static int MAX_OBJECT_SUFFIX;
    private static final java.lang.String TAG;
    private static final java.util.concurrent.ConcurrentHashMap cache;
    private static com.facebook.internal.FileLruCache controllerDiskCache;
    private static com.facebook.internal.WorkQueue diskIOWorkQueue;
    private static android.os.Handler handler;
    private static boolean isInitialized;
    private static boolean isPendingBroadcastReset;
    private static com.facebook.internal.WorkQueue mruCacheWorkQueue;
    private static java.lang.String objectIdForPendingController;
    private static volatile int objectSuffix;
    private com.facebook.AppEventsLogger appEventsLogger;
    private android.content.Context context;
    private boolean isObjectLiked;
    private boolean isObjectLikedOnServer;
    private boolean isPendingLikeOrUnlike;
    private java.lang.String likeCountStringWithLike;
    private java.lang.String likeCountStringWithoutLike;
    private java.lang.String objectId;
    private boolean objectIsPage;
    private android.os.Bundle pendingCallAnalyticsBundle;
    private java.util.UUID pendingCallId;
    private com.facebook.Session session;
    private java.lang.String socialSentenceWithLike;
    private java.lang.String socialSentenceWithoutLike;
    private java.lang.String unlikeToken;
    private java.lang.String verifiedObjectId;

    // Methods
    static
    {
      TAG = com.facebook.internal.LikeActionController.class.getSimpleName();
      cache = new java.util.concurrent.ConcurrentHashMap();
      mruCacheWorkQueue = new com.facebook.internal.WorkQueue(1);
      diskIOWorkQueue = new com.facebook.internal.WorkQueue(1);
    }

    private LikeActionController(android.content.Context p0, com.facebook.Session p1, String p2)
    {
      super();
      this.context = p0;
      this.session = p1;
      this.objectId = p2;
      this.appEventsLogger = AppEventsLogger.newLogger(p0, p1);
    }

    /* synthetic */ static boolean access$000(
            com.facebook.internal.LikeActionController p0,
            int p1,
            int p2,
            android.content.Intent p3,
            java.util.UUID p4)
    {
      return p0.onActivityResult(p1, p2, p3, p4);
    }

    /* synthetic */ static void access$100(com.facebook.internal.LikeActionController p0)
    {
      p0.refreshStatusAsync();
    }

    /* synthetic */ static String access$1000(com.facebook.internal.LikeActionController p0)
    {
      return p0.socialSentenceWithLike;
    }

    /* synthetic */ static String access$1100(com.facebook.internal.LikeActionController p0)
    {
      return p0.socialSentenceWithoutLike;
    }

    /* synthetic */ static String access$1200(com.facebook.internal.LikeActionController p0)
    {
      return p0.unlikeToken;
    }

    /* synthetic */ static String access$1202(
            com.facebook.internal.LikeActionController p0,
            String p1)
    {
      p0.unlikeToken = p1;
      return p1;
    }

    /* synthetic */ static com.facebook.AppEventsLogger access$1300(
            com.facebook.internal.LikeActionController p0)
    {
      return p0.appEventsLogger;
    }

    /* synthetic */ static void access$1400(
            com.facebook.internal.LikeActionController p0,
            boolean p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6)
    {
      p0.updateState(p1, p2, p3, p4, p5, p6);
    }

    /* synthetic */ static String access$1500()
    {
      return TAG;
    }

    /* synthetic */ static void access$1600(
            com.facebook.internal.LikeActionController p0,
            String p1,
            android.os.Bundle p2)
    {
      p0.logAppEventForError(p1, p2);
    }

    /* synthetic */ static android.content.Context access$1700(
            com.facebook.internal.LikeActionController p0)
    {
      return p0.context;
    }

    /* synthetic */ static void access$1800(
            android.content.Context p0,
            com.facebook.internal.LikeActionController p1,
            String p2,
            android.os.Bundle p3)
    {
      broadcastAction(p0, p1, p2, p3);
    }

    /* synthetic */ static String access$1900(com.facebook.internal.LikeActionController p0)
    {
      return p0.verifiedObjectId;
    }

    /* synthetic */ static String access$1902(
            com.facebook.internal.LikeActionController p0,
            String p1)
    {
      p0.verifiedObjectId = p1;
      return p1;
    }

    /* synthetic */ static boolean access$200()
    {
      return isPendingBroadcastReset;
    }

    /* synthetic */ static boolean access$2002(
            com.facebook.internal.LikeActionController p0,
            boolean p1)
    {
      p0.isPendingLikeOrUnlike = p1;
      return p1;
    }

    /* synthetic */ static boolean access$202(boolean p0)
    {
      isPendingBroadcastReset = p0;
      return p0;
    }

    /* synthetic */ static void access$2100(
            com.facebook.internal.LikeActionController p0,
            android.app.Activity p1,
            android.os.Bundle p2,
            boolean p3)
    {
      p0.fallbackToDialog(p1, p2, p3);
    }

    /* synthetic */ static boolean access$2202(
            com.facebook.internal.LikeActionController p0,
            boolean p1)
    {
      p0.isObjectLikedOnServer = p1;
      return p1;
    }

    /* synthetic */ static void access$2300(
            com.facebook.internal.LikeActionController p0,
            android.app.Activity p1,
            android.os.Bundle p2)
    {
      p0.toggleAgainIfNeeded(p1, p2);
    }

    /* synthetic */ static String access$2400(com.facebook.internal.LikeActionController p0)
    {
      return p0.objectId;
    }

    /* synthetic */ static boolean access$2502(
            com.facebook.internal.LikeActionController p0,
            boolean p1)
    {
      p0.objectIsPage = p1;
      return p1;
    }

    /* synthetic */ static void access$2600(
            com.facebook.internal.LikeActionController p0,
            String p1,
            com.facebook.FacebookRequestError p2)
    {
      p0.logAppEventForError(p1, p2);
    }

    /* synthetic */ static com.facebook.Session access$2700(
            com.facebook.internal.LikeActionController p0)
    {
      return p0.session;
    }

    /* synthetic */ static boolean access$2800(com.facebook.internal.LikeActionController p0)
    {
      return p0.isObjectLiked;
    }

    /* synthetic */ static void access$2900(String p0, String p1)
    {
      serializeToDiskSynchronously(p0, p1);
    }

    /* synthetic */ static int access$300()
    {
      return objectSuffix;
    }

    /* synthetic */ static void access$3000(
            android.content.Context p0,
            String p1,
            com.facebook.internal.LikeActionController$CreationCallback p2)
    {
      createControllerForObjectId(p0, p1, p2);
    }

    /* synthetic */ static int access$302(int p0)
    {
      objectSuffix = p0;
      return p0;
    }

    /* synthetic */ static java.util.concurrent.ConcurrentHashMap access$400()
    {
      return cache;
    }

    /* synthetic */ static com.facebook.internal.FileLruCache access$500()
    {
      return controllerDiskCache;
    }

    /* synthetic */ static void access$600(
            android.content.Context p0,
            com.facebook.internal.LikeActionController p1,
            String p2)
    {
      broadcastAction(p0, p1, p2, null);
    }

    /* synthetic */ static android.os.Handler access$700()
    {
      return handler;
    }

    /* synthetic */ static String access$800(com.facebook.internal.LikeActionController p0)
    {
      return p0.likeCountStringWithLike;
    }

    /* synthetic */ static String access$900(com.facebook.internal.LikeActionController p0)
    {
      return p0.likeCountStringWithoutLike;
    }

    private static void broadcastAction(
            android.content.Context p0,
            com.facebook.internal.LikeActionController p1,
            String p2)
    {
      broadcastAction(p0, p1, p2, null);
    }

    private static void broadcastAction(
            android.content.Context p0,
            com.facebook.internal.LikeActionController p1,
            String p2,
            android.os.Bundle p3)
    {
      android.content.Intent v4;
      v4 = new android.content.Intent(p2);
      if ( p1 != null )
      {
        if ( p3 == null )
          p3 = new android.os.Bundle();
        p3.putString("com.facebook.sdk.LikeActionController.OBJECT_ID", p1.getObjectId());
      }
      if ( p3 != null )
        v4.putExtras(p3);
      LocalBroadcastManager.getInstance(p0.getApplicationContext()).sendBroadcast(v4);
    }

    private boolean canUseOGPublish()
    {
      return !this.objectIsPage
          && this.verifiedObjectId != null
          && this.session != null
          && this.session.getPermissions() != null
          && this.session.getPermissions().contains("publish_actions");
    }

    private static void createControllerForObjectId(
            android.content.Context p0,
            String p1,
            com.facebook.internal.LikeActionController$CreationCallback p2)
    {
      com.facebook.internal.LikeActionController ControllerFromInMemoryCache; // RETVAL
      com.facebook.internal.LikeActionController v4;
      ControllerFromInMemoryCache = getControllerFromInMemoryCache(p1);
      if ( ControllerFromInMemoryCache != null )
      {
        invokeCallbackWithController(p2, ControllerFromInMemoryCache);
      }
      else
      {
        v4 = deserializeFromDiskSynchronously(p0, p1);
        if ( v4 == null )
        {
          v4 = new com.facebook.internal.LikeActionController(p0, Session.getActiveSession(), p1);
          serializeToDiskAsync(v4);
        }
        putControllerInMemoryCache(p1, v4);
        handler.post((Runnable)new com.facebook.internal.LikeActionController$2(v4));
        invokeCallbackWithController(p2, v4);
      }
    }

    private static com.facebook.internal.LikeActionController deserializeFromDiskSynchronously(
            android.content.Context p0,
            String p1)
    {
      com.facebook.internal.LikeActionController v2 = null;
      java.io.InputStream v3 = null; // RETVAL
      java.io.Closeable v4 = null;
      String StreamToString = null;
      Object v8 = null;
      java.io.IOException _cv_1 = null;
      Throwable _cv_2 = null;
      Throwable _cv_3 = null;
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
              _ehCatchPc = 10;
              v3 = controllerDiskCache.get(getCacheKeyForObjectId(p1));
              v4 = v3;
              if ( !(v3 == null) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( v4 != null )
              Utility.closeQuietly(v4);
              return v2;
            case 2:
              _ehCatchPc = 7;
              _ehCatchPc = 3;
              StreamToString = Utility.readStreamToString(v3);
              if ( !Utility.isNullOrEmpty(StreamToString) )
              v2 = deserializeFromJson(p0, StreamToString);
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 5; continue _sm; }
              _cv_1 = (java.io.IOException)_ehCaught;
              _pc = 4;
              continue _sm;
            case 4:
              Log.e(TAG, "Unable to deserialize controller from disk", _cv_1);
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _pc = 9;
              continue _sm;
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v8 = _cv_2;
              _pc = 12;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v4 != null )
              Utility.closeQuietly(v4);
              return v2;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 11; continue _sm; }
              v4 = null;
              _pc = 4;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_3 = (Throwable)_ehCaught;
              v4 = null;
              v8 = _cv_3;
              _pc = 12;
              continue _sm;
            case 12:
              if ( v4 != null )
              Utility.closeQuietly(v4);
              throw com.gameloft.android.DecompRT.sneakyThrow(v8);
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    private static com.facebook.internal.LikeActionController deserializeFromJson(
            android.content.Context p0,
            String p1)
    {
      com.facebook.internal.LikeActionController v2;
      org.json.JSONObject v3;
      com.facebook.internal.LikeActionController v5;
      String v6;
      org.json.JSONObject v7; // RETVAL
    
      v2 = null;
      try
      {
        v3 = new org.json.JSONObject(p1);
        if ( v3.optInt("com.facebook.internal.LikeActionController.version", -1) == 2 )
        {
          v5 = new com.facebook.internal.LikeActionController(p0, Session.getActiveSession(), v3.getString("object_id"));
          v5.likeCountStringWithLike = v3.optString("like_count_string_with_like", null);
          v5.likeCountStringWithoutLike = v3.optString("like_count_string_without_like", null);
          v5.socialSentenceWithLike = v3.optString("social_sentence_with_like", null);
          v5.socialSentenceWithoutLike = v3.optString("social_sentence_without_like", null);
          v5.isObjectLiked = v3.optBoolean("is_object_liked");
          v5.unlikeToken = v3.optString("unlike_token", null);
          v6 = v3.optString("pending_call_id", null);
          if ( !Utility.isNullOrEmpty(v6) )
            v5.pendingCallId = UUID.fromString(v6);
          v7 = v3.optJSONObject("pending_call_analytics_bundle");
          if ( v7 != null )
            v5.pendingCallAnalyticsBundle = BundleJSONConverter.convertToBundle(v7);
          return v5;
        }
        return v2;
      }
      catch ( org.json.JSONException v8 )
      {
        Log.e(TAG, "Unable to deserialize controller from JSON", v8);
        return v2;
      }
    }

    private void fallbackToDialog(android.app.Activity p0, android.os.Bundle p1, boolean p2)
    {
      this.updateState(p2, this.likeCountStringWithLike, this.likeCountStringWithoutLike, this.socialSentenceWithLike, this.socialSentenceWithoutLike, this.unlikeToken);
      this.presentLikeDialog(p0, p1);
    }

    private void fetchVerifiedObjectId(
            com.facebook.internal.LikeActionController$RequestCompletionCallback p0)
    {
      com.facebook.internal.LikeActionController$GetOGObjectIdRequestWrapper v2;
      com.facebook.internal.LikeActionController$GetPageIdRequestWrapper v3;
      com.facebook.RequestBatch v4;
      if ( Utility.isNullOrEmpty(this.verifiedObjectId) )
      {
        v2 = new com.facebook.internal.LikeActionController$GetOGObjectIdRequestWrapper(this, this.objectId);
        v3 = new com.facebook.internal.LikeActionController$GetPageIdRequestWrapper(this, this.objectId);
        v4 = new com.facebook.RequestBatch();
        v2.addToBatch(v4);
        v3.addToBatch(v4);
        v4.addCallback((com.facebook.RequestBatch$Callback)new com.facebook.internal.LikeActionController$10(this, v2, v3, p0));
        v4.executeAsync();
      }
      else if ( p0 != null )
      {
        p0.onComplete();
      }
    }

    private static String getCacheKeyForObjectId(String p0)
    {
      String AccessToken;
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v3;
      Object[] v4;
      int v5;
      AccessToken = null;
      ActiveSession = Session.getActiveSession();
      v3 = ActiveSession;
      if ( ActiveSession != null && ActiveSession.isOpened() )
        AccessToken = v3.getAccessToken();
      if ( AccessToken != null )
        AccessToken = Utility.md5hash(AccessToken);
      v4 = new Object[3];
      v4[0] = p0;
      v4[1] = Utility.coerceValueIfNullOrEmpty(AccessToken, "");
      v5 = objectSuffix;
      v4[2] = Integer.valueOf(v5);
      return String.format("%s|%s|com.fb.sdk.like|%d", v4);
    }

    public static void getControllerForObjectId(
            android.content.Context p0,
            String p1,
            com.facebook.internal.LikeActionController$CreationCallback p2)
    {
      com.facebook.internal.LikeActionController ControllerFromInMemoryCache; // RETVAL
    
      if ( !isInitialized )
        performFirstInitialize(p0);
      ControllerFromInMemoryCache = getControllerFromInMemoryCache(p1);
      if ( ControllerFromInMemoryCache != null )
        invokeCallbackWithController(p2, ControllerFromInMemoryCache);
      else
        diskIOWorkQueue.addActiveWorkItem((Runnable)new com.facebook.internal.LikeActionController$CreateLikeActionControllerWorkItem(p0, p1, p2));
    }

    private static com.facebook.internal.LikeActionController getControllerFromInMemoryCache(
            String p0)
    {
      String CacheKeyForObjectId;
      com.facebook.internal.LikeActionController v2;
      CacheKeyForObjectId = getCacheKeyForObjectId(p0);
      v2 = (com.facebook.internal.LikeActionController)cache.get(CacheKeyForObjectId);
      if ( v2 != null )
        mruCacheWorkQueue.addActiveWorkItem((Runnable)new com.facebook.internal.LikeActionController$MRUCacheWorkItem(CacheKeyForObjectId, false));
      return v2;
    }

    private com.facebook.widget.FacebookDialog$Callback getFacebookDialogCallback(
            android.os.Bundle p0)
    {
      return (com.facebook.widget.FacebookDialog$Callback)new com.facebook.internal.LikeActionController$5(this, p0);
    }

    public static boolean handleOnActivityResult(
            android.content.Context p0,
            int p1,
            int p2,
            android.content.Intent p3)
    {
      boolean v4;
      java.util.UUID v5;
      v4 = false;
      v5 = NativeProtocol.getCallIdFromIntent(p3);
      if ( v5 != null )
      {
        if ( Utility.isNullOrEmpty(objectIdForPendingController) )
          objectIdForPendingController = p0.getSharedPreferences("com.facebook.LikeActionController.CONTROLLER_STORE_KEY", 0).getString("PENDING_CONTROLLER_KEY", null);
        if ( !Utility.isNullOrEmpty(objectIdForPendingController) )
        {
          getControllerForObjectId(
            p0,
            objectIdForPendingController,
            (com.facebook.internal.LikeActionController$CreationCallback)new com.facebook.internal.LikeActionController$1(p1, p2, p3, v5));
          return true;
        }
      }
      return v4;
    }

    private static void invokeCallbackWithController(
            com.facebook.internal.LikeActionController$CreationCallback p0,
            com.facebook.internal.LikeActionController p1)
    {
      if ( p0 != null )
        handler.post((Runnable)new com.facebook.internal.LikeActionController$3(p0, p1));
    }

    private void logAppEventForError(String p0, android.os.Bundle p1)
    {
      android.os.Bundle v3;
      v3 = new android.os.Bundle(p1);
      v3.putString("object_id", this.objectId);
      v3.putString("current_action", p0);
      this.appEventsLogger.logSdkEvent("fb_like_control_error", null, v3);
    }

    private void logAppEventForError(String p0, com.facebook.FacebookRequestError p1)
    {
      android.os.Bundle v3;
      org.json.JSONObject RequestResult; // RETVAL
    
      v3 = new android.os.Bundle();
      if ( p1 != null )
      {
        RequestResult = p1.getRequestResult();
        if ( RequestResult != null )
          v3.putString("error", RequestResult.toString());
      }
      this.logAppEventForError(p0, v3);
    }

    private boolean onActivityResult(int p0, int p1, android.content.Intent p2, java.util.UUID p3)
    {
      boolean v5;
      com.facebook.widget.FacebookDialog$PendingCall v7;
      v5 = false;
      if ( this.pendingCallId != null && this.pendingCallId.equals(p3) )
      {
        v7 = PendingCallStore.getInstance().getPendingCallById(this.pendingCallId);
        if ( v7 != null )
        {
          FacebookDialog.handleActivityResult(
            this.context,
            v7,
            p0,
            p2,
            this.getFacebookDialogCallback(this.pendingCallAnalyticsBundle));
          this.stopTrackingPendingCall();
          return true;
        }
      }
      return v5;
    }

    private static synchronized void performFirstInitialize(android.content.Context p0)
    {
      if ( !isInitialized )
      {
        try
        {
          handler = new android.os.Handler(Looper.getMainLooper());
          objectSuffix = p0.getSharedPreferences("com.facebook.LikeActionController.CONTROLLER_STORE_KEY", 0).getInt("OBJECT_SUFFIX", 1);
          controllerDiskCache = new com.facebook.internal.FileLruCache(p0, TAG, new com.facebook.internal.FileLruCache$Limits());
          registerSessionBroadcastReceivers(p0);
          isInitialized = true;
        }
        finally
        {
        }
      }
    }

    private void performLikeOrUnlike(android.app.Activity p0, boolean p1, android.os.Bundle p2)
    {
      if ( this.canUseOGPublish() )
      {
        if ( p1 )
        {
          this.publishLikeAsync(p0, p2);
        }
        else if ( Utility.isNullOrEmpty(this.unlikeToken) )
        {
          this.fallbackToDialog(p0, p2, true);
        }
        else
        {
          this.publishUnlikeAsync(p0, p2);
        }
      }
      else
      {
        this.presentLikeDialog(p0, p2);
      }
    }

    private void presentLikeDialog(android.app.Activity p0, android.os.Bundle p1)
    {
      com.facebook.internal.LikeActionController$LikeDialogBuilder v3;
      String WebFallbackUrl;
      v3 = new com.facebook.internal.LikeActionController$LikeDialogBuilder(p0, this.objectId);
      if ( v3.canPresent() )
      {
        this.trackPendingCall(v3.build().present(), p1);
        this.appEventsLogger.logSdkEvent("fb_like_control_did_present_dialog", null, p1);
      }
      else
      {
        WebFallbackUrl = v3.getWebFallbackUrl();
        if ( !Utility.isNullOrEmpty(WebFallbackUrl)
          && FacebookWebFallbackDialog.presentWebFallback(
               p0,
               WebFallbackUrl,
               v3.getApplicationId(),
               v3.getAppCall(),
               this.getFacebookDialogCallback(p1)) )
        {
          this.appEventsLogger.logSdkEvent("fb_like_control_did_present_fallback_dialog", null, p1);
        }
      }
    }

    private void publishLikeAsync(android.app.Activity p0, android.os.Bundle p1)
    {
      this.isPendingLikeOrUnlike = true;
      this.fetchVerifiedObjectId((com.facebook.internal.LikeActionController$RequestCompletionCallback)new com.facebook.internal.LikeActionController$6(this, p0, p1));
    }

    private void publishUnlikeAsync(android.app.Activity p0, android.os.Bundle p1)
    {
      com.facebook.RequestBatch v3;
      com.facebook.internal.LikeActionController$PublishUnlikeRequestWrapper v4;
      this.isPendingLikeOrUnlike = true;
      v3 = new com.facebook.RequestBatch();
      v4 = new com.facebook.internal.LikeActionController$PublishUnlikeRequestWrapper(this, this.unlikeToken);
      v4.addToBatch(v3);
      v3.addCallback((com.facebook.RequestBatch$Callback)new com.facebook.internal.LikeActionController$7(this, v4, p0, p1));
      v3.executeAsync();
    }

    private static void putControllerInMemoryCache(
            String p0,
            com.facebook.internal.LikeActionController p1)
    {
      String CacheKeyForObjectId;
      CacheKeyForObjectId = getCacheKeyForObjectId(p0);
      mruCacheWorkQueue.addActiveWorkItem((Runnable)new com.facebook.internal.LikeActionController$MRUCacheWorkItem(CacheKeyForObjectId, true));
      cache.put(CacheKeyForObjectId, p1);
    }

    private void refreshStatusAsync()
    {
      if ( this.session == null || this.session.isClosed() || SessionState.CREATED.equals(this.session.getState()) )
      {
        this.refreshStatusViaService();
      }
      else if ( this.session.isOpened() )
      {
        this.fetchVerifiedObjectId((com.facebook.internal.LikeActionController$RequestCompletionCallback)new com.facebook.internal.LikeActionController$8(this));
      }
    }

    private void refreshStatusViaService()
    {
      com.facebook.internal.LikeStatusClient v1;
      v1 = new com.facebook.internal.LikeStatusClient(this.context, Settings.getApplicationId(), this.objectId);
      if ( v1.start() )
        v1.setCompletedListener((com.facebook.internal.PlatformServiceClient$CompletedListener)new com.facebook.internal.LikeActionController$9(this));
    }

    private static void registerSessionBroadcastReceivers(android.content.Context p0)
    {
      android.support.v4.content.LocalBroadcastManager Instance; // RETVAL
      android.content.IntentFilter v2;
      Instance = LocalBroadcastManager.getInstance(p0);
      v2 = new android.content.IntentFilter();
      v2.addAction("com.facebook.sdk.ACTIVE_SESSION_UNSET");
      v2.addAction("com.facebook.sdk.ACTIVE_SESSION_CLOSED");
      v2.addAction("com.facebook.sdk.ACTIVE_SESSION_OPENED");
      Instance.registerReceiver(new com.facebook.internal.LikeActionController$4(), v2);
    }

    private static void serializeToDiskAsync(com.facebook.internal.LikeActionController p0)
    {
      String v1;
      String CacheKeyForObjectId;
      v1 = serializeToJson(p0);
      CacheKeyForObjectId = getCacheKeyForObjectId(p0.objectId);
      if ( !Utility.isNullOrEmpty(v1) && !Utility.isNullOrEmpty(CacheKeyForObjectId) )
        diskIOWorkQueue.addActiveWorkItem((Runnable)new com.facebook.internal.LikeActionController$SerializeToDiskWorkItem(CacheKeyForObjectId, v1));
    }

    private static void serializeToDiskSynchronously(String p0, String p1)
    {
      java.io.OutputStream v2;
      try
      {
        try
        {
          v2 = controllerDiskCache.openPutStream(p0);
          v2.write(p1.getBytes());
          if ( v2 != null )
            Utility.closeQuietly(v2);
          return;
        }
        catch ( java.io.IOException v3 )
        {
          Log.e(TAG, "Unable to serialize controller to disk", v3);
          return;
        }
      }
      finally
      {
      }
    }

    private static String serializeToJson(com.facebook.internal.LikeActionController p0)
    {
      org.json.JSONObject v1;
      org.json.JSONObject v2; // RETVAL
    
      v1 = new org.json.JSONObject();
      try
      {
        v1.put("com.facebook.internal.LikeActionController.version", 2);
        v1.put("object_id", p0.objectId);
        v1.put("like_count_string_with_like", p0.likeCountStringWithLike);
        v1.put("like_count_string_without_like", p0.likeCountStringWithoutLike);
        v1.put("social_sentence_with_like", p0.socialSentenceWithLike);
        v1.put("social_sentence_without_like", p0.socialSentenceWithoutLike);
        v1.put("is_object_liked", p0.isObjectLiked);
        v1.put("unlike_token", p0.unlikeToken);
        if ( p0.pendingCallId != null )
          v1.put("pending_call_id", p0.pendingCallId.toString());
        if ( p0.pendingCallAnalyticsBundle != null )
        {
          v2 = BundleJSONConverter.convertToJSON(p0.pendingCallAnalyticsBundle);
          if ( v2 != null )
            v1.put("pending_call_analytics_bundle", v2);
        }
        return v1.toString();
      }
      catch ( org.json.JSONException v5 )
      {
        Log.e(TAG, "Unable to serialize controller to JSON", v5);
        return null;
      }
    }

    private void stopTrackingPendingCall()
    {
      PendingCallStore.getInstance().stopTrackingPendingCall(this.pendingCallId);
      this.pendingCallId = null;
      this.pendingCallAnalyticsBundle = null;
      this.storeObjectIdForPendingController(null);
    }

    private void storeObjectIdForPendingController(String p0)
    {
      objectIdForPendingController = p0;
      this.context.getSharedPreferences("com.facebook.LikeActionController.CONTROLLER_STORE_KEY", 0).edit().putString("PENDING_CONTROLLER_KEY", objectIdForPendingController).apply();
    }

    private void toggleAgainIfNeeded(android.app.Activity p0, android.os.Bundle p1)
    {
      if ( this.isObjectLiked != this.isObjectLikedOnServer )
        this.performLikeOrUnlike(p0, this.isObjectLiked, p1);
    }

    private void trackPendingCall(
            com.facebook.widget.FacebookDialog$PendingCall p0,
            android.os.Bundle p1)
    {
      PendingCallStore.getInstance().trackPendingCall(p0);
      this.pendingCallId = p0.getCallId();
      this.storeObjectIdForPendingController(this.objectId);
      this.pendingCallAnalyticsBundle = p1;
      serializeToDiskAsync(this);
    }

    private void updateState(boolean p0, String p1, String p2, String p3, String p4, String p5)
    {
      String v7;
      String v8;
      String v9;
      String v10;
      String v11;
      v7 = Utility.coerceValueIfNullOrEmpty(p1, null);
      v8 = Utility.coerceValueIfNullOrEmpty(p2, null);
      v9 = Utility.coerceValueIfNullOrEmpty(p3, null);
      v10 = Utility.coerceValueIfNullOrEmpty(p4, null);
      v11 = Utility.coerceValueIfNullOrEmpty(p5, null);
      if ( p0 != this.isObjectLiked
        || !Utility.areObjectsEqual(v7, this.likeCountStringWithLike)
        || !Utility.areObjectsEqual(v8, this.likeCountStringWithoutLike)
        || !Utility.areObjectsEqual(v9, this.socialSentenceWithLike)
        || !Utility.areObjectsEqual(v10, this.socialSentenceWithoutLike)
        || !Utility.areObjectsEqual(v11, this.unlikeToken) )
      {
        this.isObjectLiked = p0;
        this.likeCountStringWithLike = v7;
        this.likeCountStringWithoutLike = v8;
        this.socialSentenceWithLike = v9;
        this.socialSentenceWithoutLike = v10;
        this.unlikeToken = v11;
        serializeToDiskAsync(this);
        broadcastAction(this.context, this, "com.facebook.sdk.LikeActionController.UPDATED", null);
      }
    }

    public String getLikeCountString()
    {
      if ( this.isObjectLiked )
        return this.likeCountStringWithLike;
      else
        return this.likeCountStringWithoutLike;
    }

    public String getObjectId()
    {
      return this.objectId;
    }

    public String getSocialSentence()
    {
      if ( this.isObjectLiked )
        return this.socialSentenceWithLike;
      else
        return this.socialSentenceWithoutLike;
    }

    public boolean isObjectLiked()
    {
      return this.isObjectLiked;
    }

    public void toggleLike(android.app.Activity p0, android.os.Bundle p1)
    {
      boolean v3;
      this.appEventsLogger.logSdkEvent("fb_like_control_did_tap", null, p1);
      v3 = !this.isObjectLiked;
      boolean _ogPending = false;
      if ( this.canUseOGPublish() ) {
        this.updateState(v3, this.likeCountStringWithLike, this.likeCountStringWithoutLike, this.socialSentenceWithLike, this.socialSentenceWithoutLike, this.unlikeToken);
        _ogPending = this.isPendingLikeOrUnlike;
      }
      if ( _ogPending )
      {
        this.appEventsLogger.logSdkEvent("fb_like_control_did_undo_quickly", null, p1);
      }
      else
      {
        this.performLikeOrUnlike(p0, v3, p1);
      }
    }

}
