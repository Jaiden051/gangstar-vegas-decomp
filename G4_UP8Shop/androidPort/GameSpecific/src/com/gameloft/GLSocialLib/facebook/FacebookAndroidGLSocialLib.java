// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.AccessToken;
import com.facebook.Request;
import com.facebook.Session;
import com.facebook.SessionState;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
import java.io.File;
import java.util.Arrays;
public class FacebookAndroidGLSocialLib {
    // Fields
    private static java.lang.String ACHIEVEMENT_url;
    public static int LOGIN_REQUEST_CODE;
    private static com.facebook.Session$StatusCallback LoginCallback;
    private static java.lang.String OPENGRAPH_action;
    private static java.lang.String OPENGRAPH_appNamespace;
    private static java.lang.String OPENGRAPH_objectType;
    private static java.lang.String OPENGRAPH_objectUrl;
    private static final java.util.List PUBLISH_PERMISSION;
    private static int SCORE_score;
    private static final java.util.List VIDEO_UPLOAD_PERMISSIONS;
    private static byte[] WALL_dataPic;
    private static java.lang.String WALL_description;
    private static java.lang.String WALL_gameName;
    private static java.lang.String WALL_link;
    private static java.lang.String WALL_msg;
    private static java.lang.String WALL_pictureUrl;
    private static java.lang.String WALL_privacy;
    private static java.lang.String WALL_title;
    private static java.lang.String WALL_uid;
    private static java.lang.String WALL_videoContentType;
    private static java.lang.String WALL_videoUrl;
    private static java.lang.String activeHasPermission;
    private static com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLibThread m_Thread;
    private static java.lang.String s_appId;
    public static com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib s_instance;
    private static boolean s_isLoginRequest;
    private static boolean s_isLogoutRequest;
    private static boolean s_isRefreshRequest;
    private static boolean s_isRequestPermissionRequest;
    private static java.util.List s_loginReadPermissions;
    private android.app.Activity m_activity;
    private android.content.Context m_context;
    private java.lang.String[] m_permissions;

    // Methods
    static
    {
      String[] v0;
      String[] v1;
      s_appId = null;
      s_isLoginRequest = false;
      s_isLogoutRequest = false;
      s_isRequestPermissionRequest = false;
      s_isRefreshRequest = false;
      activeHasPermission = "error";
      v0 = new String[1];
      v0[0] = "publish_actions";
      PUBLISH_PERMISSION = Arrays.asList(v0);
      v1 = new String[2];
      v1[0] = "publish_actions";
      v1[1] = "video_upload";
      VIDEO_UPLOAD_PERMISSIONS = Arrays.asList(v1);
      LoginCallback = (com.facebook.Session$StatusCallback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$1();
    }

    public FacebookAndroidGLSocialLib(android.app.Activity p0, android.content.Context p1)
    {
      super();
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLib constructor");
      this.m_activity = p0;
      this.m_context = p1;
      s_instance = this;
    }

    public static void GetApp()
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$19());
    }

    public static void GetFriends()
    {
      com.facebook.Session ActiveSession; // RETVAL
    
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("user_friends") )
        {
          FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$15());
        }
        else
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: No user_friends Permission in GetFriends");
          nativeOnFBFailWithError("Facebook Android SNS ERROR: No user_friends permission");
        }
      }
    }

    public static void GetFriendsData(int p0, int p1)
    {
      com.facebook.Session ActiveSession; // RETVAL
    
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("user_friends") )
        {
          FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$16(p1, p0));
        }
        else
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: No user_friends Permission in GetFriendsData");
          nativeOnFBFailWithError("Facebook Android SNS ERROR: No user_friends permission");
        }
      }
    }

    public static void GetMyInfo()
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$12());
    }

    public static void GetPicture()
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$13());
    }

    public static void GetUserData(String p0)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserData()");
      if ( p0 != null )
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserData() ids: " + p0);
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17(p0));
    }

    public static void GetUserLocale()
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$14());
    }

    public static void GetUserNames(String p0)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserNames()");
      if ( p0 != null )
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserNames() ids: " + p0);
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$18(p0));
    }

    public static void Init(String p0)
    {
      com.facebook.Session ActiveSession;
      com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLibThread v2;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Init()");
      s_instance.m_activity.runOnUiThread((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$2());
      s_loginReadPermissions = null;
      if ( !p0.isEmpty() )
        s_loginReadPermissions = Arrays.asList(p0.split(","));
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession == null )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: m_session==null && s_appId!=null");
        ActiveSession = new com.facebook.Session$Builder(s_instance.m_context).build();
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: new Session");
        ActiveSession.addCallback(LoginCallback);
        if ( ActiveSession.getState() == SessionState.CREATED_TOKEN_LOADED )
        {
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: CREATED_TOKEN_LOADED");
          ActiveSession.open(AccessToken.createFromExistingAccessToken(
                               ActiveSession.getAccessToken(),
                               ActiveSession.getExpirationDate(),
                               null,
                               null,
                               ActiveSession.getPermissions()), LoginCallback);
        }
        Session.setActiveSession(ActiveSession);
      }
      s_appId = ActiveSession.getApplicationId();
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: appID = " + s_appId);
      v2 = new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLibThread();
      m_Thread = v2;
      v2.start();
    }

    public static boolean IsLoggedIn()
    {
      return Session.getActiveSession() != null && Session.getActiveSession().isOpened();
    }

    public static void Login()
    {
      s_instance.m_activity.runOnUiThread((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$3());
    }

    public static void Logout()
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Logout_facade()");
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$4());
    }

    public static void ParseServerBatchedResponse(String p0, String p1)
    {
      if ( p0 != null )
      {
        nativeOnFBDataLoad(p0);
      }
      else
      {
        ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + ": response is null");
        nativeOnFBFailWithError("Facebook Android SNS ERROR: response is null");
      }
    }

    public static void ParseServerDialogResponse(
            android.os.Bundle p0,
            com.facebook.FacebookException p1,
            String p2)
    {
      String String = null;
      org.json.JSONObject v4 = null;
      int v5 = 0;
      org.json.JSONArray v6 = null;
      String v7 = null; // RETVAL
      String v9 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: ParseServerDialogResponse");
            if ( !(p1 != null) ) { _pc = 3; continue _sm; }
            if ( !(p1 instanceof com.facebook.FacebookOperationCanceledException) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: User Canceled " + p2);
            nativeOnFBDialogDidNotComplete();
            nativeOnFBDialogSetCancel();
            return;
          case 2:
            ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Network Error while " + p2 + ":" + p1.toString());
            nativeOnFBFailWithError("Facebook Android SNS ERROR: " + p1.toString());
            _pc = 4;
            continue _sm;
          case 3:
            {
            if ( p0 == null || p0.isEmpty() )
            { _pc = 1; continue _sm; }
            String = p0.getString("error_code");
            if ( String != null )
            {
            v9 = p0.getString("error_msg");
            if ( v9 != null )
            {
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: FacebookError while "
            + p2
            + " error_code = "
            + String
            + " error_msg = " + v9);
            nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v9);
            }
            else
            {
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: FacebookError while " + p2 + " error_code = " + String);
            nativeOnFBFailWithError("Facebook Android SNS ERROR: error_code = " + String);
            }
            }
            else
            {
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: " + p2 + " successful. ");
            if ( p2.equals("sendGameRequestToFriends") )
            {
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: " + p0.toString());
            try
            {
            v4 = new org.json.JSONObject();
            v5 = 0;
            v6 = new org.json.JSONArray();
            while ( true )
            {
            v7 = p0.getString("to[" + v5 + "]");
            if ( v7 == null )
            break;
            v6.put(v7);
            ++v5;
            }
            v4.put("to", v6);
            nativeOnFBDataLoad(v4.toString());
            }
            catch ( org.json.JSONException v8 )
            {
            ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error when tokenizing json response: " + v8.toString());
            nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v8.toString());
            }
            }
            else
            {
            nativeOnFBDialogDidComplete();
            }
            }
            }
            _pc = 4;
            continue _sm;
          case 4:
            return;
        }
      }
}

    public static void ParseServerResponse(com.facebook.Response p0, String p1)
    {
      org.json.JSONObject InnerJSONObject; // RETVAL
      org.json.JSONObject v4;
      String String;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: ParseServerResponse");
      if ( p0 == null )
      {
        ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + ": response is null");
        nativeOnFBFailWithError("Facebook Android SNS ERROR: response is null");
        return;
      }
      if ( p0.getError() != null )
      {
        if ( p0.getError().getErrorMessage() != null )
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + " Request: " + p0.getError().getErrorMessage());
          nativeOnFBFailWithError("Facebook Android SNS ERROR: " + p0.getError().getErrorMessage());
        }
        else
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1);
          nativeOnFBFailWithError("Facebook Android SNS ERROR");
        }
      }
      else
      {
        try
        {
          if ( p0.getGraphObject() == null )
          {
            ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + ": response.getGraphObject() is null");
            nativeOnFBFailWithError("Facebook Android SNS ERROR: response.getGraphObject() is null");
            return;
          }
          InnerJSONObject = p0.getGraphObject().getInnerJSONObject();
          v4 = InnerJSONObject;
          if ( InnerJSONObject == null )
          {
            ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + ": esponse.getGraphObjec" +
                                                                                                     "t().getInnerJSONObject() is null");
            nativeOnFBFailWithError("Facebook Android SNS ERROR: esponse.getGraphObject().getInnerJSONObject() is null");
            return;
          }
          if ( InnerJSONObject.has("error") )
          {
            String = v4.getString("error");
            ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error in " + p1 + " Request: " + String);
            nativeOnFBFailWithError("Facebook Android SNS ERROR: " + String);
          }
          else
          {
            nativeOnFBDataLoad(v4.toString());
          }
        }
        catch ( org.json.JSONException v2 )
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error when tokenizing json response: " + v2.toString());
          nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v2.toString());
          return;
        }
        catch ( Exception v5 )
        {
          ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error: " + v5.toString());
          nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v5.toString());
        }
      }
    }

    public static void PostPhotoToWallWithoutDialog(byte[] p0, String p1)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostPhotoToWallWithoutDialog()");
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$10(p1, p0));
    }

    public static void PostToWall(
            String p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6)
    {
      android.os.Bundle v7;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall()");
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() msg: " + p0);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() link: " + p1);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() title: " + p2);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() pictureUrl: " + p3);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() description: " + p4);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() gameName: " + p5);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: postToWall() locale: " + p6);
      v7 = new android.os.Bundle();
      v7.putString("app_id", s_appId);
      v7.putString("link", p1);
      v7.putString("name", p2);
      v7.putString("picture", p3);
      if ( p5.isEmpty() )
        v7.putString("caption", "by Gameloft");
      else
        v7.putString("caption", p5);
      v7.putString("description", p4);
      v7.putString("message", p0);
      if ( !p6.isEmpty() )
        v7.putString("locale", p6);
      ((com.facebook.widget.WebDialog$FeedDialogBuilder)new com.facebook.widget.WebDialog$FeedDialogBuilder(s_instance.m_context, Session.getActiveSession(), v7).setOnCompleteListener((com.facebook.widget.WebDialog$OnCompleteListener)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$8())).build().show();
    }

    public static void PostToWallWithoutDialog(
            String p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog()");
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$9(p0, p1, p2, p3, p4, p5));
    }

    public static void PostToWall_facade(
            String p0,
            String p1,
            String p2,
            String p3,
            String p4,
            String p5,
            String p6)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWall_facade()");
      s_instance.m_activity.runOnUiThread((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$7(p0, p1, p2, p3, p4, p5, p6));
    }

    public static void UploadVideoFile(String p0, String p1, String p2, String p3, String p4)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: UploadVideoFile() File Path:" + p0);
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: UploadVideoFile() :" + p4);
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$5(p0, p1, p2, p3, p4));
    }

    /* synthetic */ static void access$000(
            com.facebook.Session p0,
            com.facebook.SessionState p1,
            Exception p2)
    {
      onSessionStateChange(p0, p1, p2);
    }

    /* synthetic */ static android.app.Activity access$100(
            com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib p0)
    {
      return p0.m_activity;
    }

    /* synthetic */ static android.content.Context access$200(
            com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib p0)
    {
      return p0.m_context;
    }

    /* synthetic */ static String access$300()
    {
      return s_appId;
    }

    /* synthetic */ static String access$302(String p0)
    {
      s_appId = p0;
      return p0;
    }

    /* synthetic */ static boolean access$402(boolean p0)
    {
      s_isLoginRequest = p0;
      return p0;
    }

    /* synthetic */ static com.facebook.Session$StatusCallback access$500()
    {
      return LoginCallback;
    }

    /* synthetic */ static java.util.List access$600()
    {
      return s_loginReadPermissions;
    }

    /* synthetic */ static boolean access$702(boolean p0)
    {
      s_isLogoutRequest = p0;
      return p0;
    }

    /* synthetic */ static boolean access$802(boolean p0)
    {
      s_isRefreshRequest = p0;
      return p0;
    }

    public static void deleteScore()
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$23());
    }

    public static String getAccessToken()
    {
      return Session.getActiveSession().getAccessToken();
    }

    public static void getAppScores(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$21(p0));
    }

    public static void getUserAchievements(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$25(p0));
    }

    public static void getUserLikes(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$28(p0));
    }

    public static void getUserScore(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$20(p0));
    }

    public static void gotAchievement(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$26(p0));
    }

    public static void hasPermission(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$24(p0));
    }

    public static int hasPermissionInternal(String p0)
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: hasPermissionInternal");
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains(p0) )
        {
          return 1;
        }
        else if ( v2.getDeclinedPermissions().contains(p0) )
        {
          return 0;
        }
        else
        {
          return 2;
        }
      }
      else
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
        return -1;
      }
    }

    public static native void nativeInit();

    public static native void nativeOnFBDataLoad(java.lang.String p0);

    public static native void nativeOnFBDialogDidComplete();

    public static native void nativeOnFBDialogDidNotComplete();

    public static native void nativeOnFBDialogSetCancel();

    public static native void nativeOnFBFailWithError(java.lang.String p0);

    public static native void nativeTrackDeferredAppLink(java.lang.String p0);

    private static void onSessionStateChange(
            com.facebook.Session p0,
            com.facebook.SessionState p1,
            Exception p2)
    {
      ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: s_isRefreshRequest = " + s_isRefreshRequest);
      if ( p2 != null )
      {
        ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Error while authorizing:" + p2.toString());
        if ( s_isLoginRequest || s_isRequestPermissionRequest )
        {
          s_isLoginRequest = false;
          s_isRequestPermissionRequest = false;
          nativeOnFBFailWithError("Facebook Error while authorizing:" + p2.toString());
          if ( p2.toString().contains("Cancel") )
            nativeOnFBDialogSetCancel();
        }
      }
      else if ( s_isLoginRequest )
      {
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Authorization call");
        if ( p1 == SessionState.OPENED || p1 == SessionState.OPENED_TOKEN_UPDATED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Authorization successful.");
          s_isLoginRequest = false;
          nativeOnFBDialogDidComplete();
        }
        else if ( p1 == SessionState.CLOSED || p1 == SessionState.CLOSED_LOGIN_FAILED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: User Canceled Authorization");
          s_isLoginRequest = false;
          nativeOnFBDialogDidNotComplete();
          nativeOnFBDialogSetCancel();
        }
      }
      else if ( s_isLogoutRequest )
      {
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Logout called");
        if ( p1 == SessionState.CLOSED )
        {
          s_isLogoutRequest = false;
          nativeOnFBDialogDidComplete();
        }
      }
      else if ( s_isRequestPermissionRequest )
      {
        s_isRequestPermissionRequest = false;
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Request permission call");
        if ( p1 == SessionState.OPENED || p1 == SessionState.OPENED_TOKEN_UPDATED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: User allowed permissions");
          s_isRequestPermissionRequest = false;
          nativeOnFBDialogDidComplete();
        }
        else if ( p1 == SessionState.CLOSED || p1 == SessionState.CLOSED_LOGIN_FAILED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: User denied permissions");
          s_isRequestPermissionRequest = false;
          nativeOnFBDialogDidNotComplete();
          nativeOnFBDialogSetCancel();
        }
      }
      else if ( s_isRefreshRequest )
      {
        if ( p1 == SessionState.OPENED || p1 == SessionState.OPENED_TOKEN_UPDATED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Permissions Refreshed");
          s_isRefreshRequest = false;
          hasPermission(activeHasPermission);
        }
        else if ( p1 == SessionState.CLOSED || p1 == SessionState.CLOSED_LOGIN_FAILED )
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Error App deleted");
          s_isRefreshRequest = false;
          nativeOnFBFailWithError("FacebookAndroidGLSocialLib: Error while refreshing Permissions: App deleted");
        }
        else
        {
          ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Unknown Error");
          s_isRefreshRequest = false;
          nativeOnFBFailWithError("FacebookAndroidGLSocialLib: Unknown Error");
        }
      }
    }

    public static void postOpenGraphAction(String p0, String p1, String p2, String p3)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$11(p3, p2, p0, p1));
    }

    public static void refreshPermissions(String p0)
    {
      activeHasPermission = p0;
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$29());
    }

    public static void requestPermission(String p0, boolean p1)
    {
      com.facebook.Session ActiveSession;
      java.util.List v3;
      com.facebook.Session$NewPermissionsRequest v4;
      ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: requestPermission");
      ActiveSession = Session.getActiveSession();
      v3 = null;
      if ( p0 != null )
        v3 = Arrays.asList(p0.split(","));
      v4 = new com.facebook.Session$NewPermissionsRequest(s_instance.m_activity, v3);
      s_isRequestPermissionRequest = true;
      if ( p1 )
        ActiveSession.requestNewReadPermissions(v4);
      else
        ActiveSession.requestNewPublishPermissions(v4);
    }

    public static void resetAchievement(String p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$27(p0));
    }

    public static boolean searchPermissionFromResponse(com.facebook.Response p0, String p1)
    {
      boolean v2;
      org.json.JSONObject InnerJSONObject; // RETVAL
      org.json.JSONObject v5;
      org.json.JSONArray JSONArray; // RETVAL
      org.json.JSONArray v7;
      org.json.JSONObject v8; // RETVAL
      org.json.JSONObject v9;
      v2 = false;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: searchPermissionFromResponse");
      if ( p0 == null || p0.getError() != null )
        return v2;
      try
      {
        if ( p0.getGraphObject() != null )
        {
          InnerJSONObject = p0.getGraphObject().getInnerJSONObject();
          v5 = InnerJSONObject;
          if ( InnerJSONObject != null && !InnerJSONObject.has("error") && v5.has("data") )
          {
            JSONArray = v5.getJSONArray("data");
            v7 = JSONArray;
            if ( JSONArray != null && JSONArray.length() > 0 )
            {
              v8 = v7.optJSONObject(0);
              v9 = v8;
              if ( v8 != null && v8.has(p1) )
                return v9.getInt(p1) == 1;
            }
          }
        }
        return v2;
      }
      catch ( org.json.JSONException e )
      {
        return v2;
      }
      catch ( Exception e )
      {
      }
      return v2;
    }

    public static void sendGameRequestToFriends(String p0, String p1)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: sendGameRequestToFriends()");
      s_instance.m_activity.runOnUiThread((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$6(p1, p0));
    }

    public static void updateScore(int p0)
    {
      FacebookAndroidGLSocialLibThread.m_handler.post((Runnable)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$22(p0));
    }

    public void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: onActivityResult");
      try
      {
        if ( Session.getActiveSession() != null )
          Session.getActiveSession().onActivityResult(s_instance.m_activity, p0, p1, p2);
      }
      catch ( Exception v4 )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: exception on onActivityResult: " + v4.toString());
      }
    }

}
