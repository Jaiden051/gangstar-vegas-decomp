// Decompiled from classes.dex (SourceFile: UiLifecycleHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.support.v4.content.LocalBroadcastManager;
import android.util.Log;
import com.facebook.internal.LikeActionController;
import com.facebook.internal.NativeProtocol;
import com.facebook.internal.PendingCallStore;
import com.facebook.widget.FacebookDialog;
import java.util.UUID;
public class UiLifecycleHelper {
    // Fields
    private static java.lang.String ACTIVITY_NULL_MESSAGE;
    private static java.lang.String DIALOG_CALL_ID_SAVE_KEY;
    private final android.app.Activity activity;
    private com.facebook.AppEventsLogger appEventsLogger;
    private final android.support.v4.content.LocalBroadcastManager broadcastManager;
    private final com.facebook.Session$StatusCallback callback;
    private java.util.UUID pendingFacebookDialogCallId;
    private com.facebook.internal.PendingCallStore pendingFacebookDialogCallStore;
    private final android.content.BroadcastReceiver receiver;

    // Methods
    public UiLifecycleHelper(android.app.Activity p0, com.facebook.Session$StatusCallback p1)
    {
      super();
      if ( p0 == null )
        throw new IllegalArgumentException("activity cannot be null");
      this.activity = p0;
      this.callback = p1;
      this.receiver = new com.facebook.UiLifecycleHelper$ActiveSessionBroadcastReceiver(this, null);
      this.broadcastManager = LocalBroadcastManager.getInstance(p0);
      this.pendingFacebookDialogCallStore = PendingCallStore.getInstance();
      Settings.sdkInitialize(p0);
    }

    /* synthetic */ static com.facebook.Session$StatusCallback access$100(
            com.facebook.UiLifecycleHelper p0)
    {
      return p0.callback;
    }

    private void cancelPendingAppCall(com.facebook.widget.FacebookDialog$Callback p0)
    {
      com.facebook.widget.FacebookDialog$PendingCall v2; // RETVAL
      com.facebook.widget.FacebookDialog$PendingCall v3;
      android.content.Intent RequestIntent;
      android.content.Intent v5;
      if ( this.pendingFacebookDialogCallId != null )
      {
        v2 = this.pendingFacebookDialogCallStore.getPendingCallById(this.pendingFacebookDialogCallId);
        v3 = v2;
        if ( v2 != null )
        {
          if ( p0 != null )
          {
            RequestIntent = v2.getRequestIntent();
            v5 = new android.content.Intent();
            v5.putExtra("com.facebook.platform.protocol.CALL_ID", RequestIntent.getStringExtra("com.facebook.platform.protocol.CALL_ID"));
            v5.putExtra("com.facebook.platform.protocol.PROTOCOL_ACTION", RequestIntent.getStringExtra("com.facebook.platform" +
                                                                                                       ".protocol.PROTOCOL_ACTION"));
            v5.putExtra("com.facebook.platform.protocol.PROTOCOL_VERSION", RequestIntent.getIntExtra("com.facebook.platform.p" +
                                                                                                     "rotocol.PROTOCOL_VERSION", 0));
            v5.putExtra("com.facebook.platform.status.ERROR_TYPE", "UnknownError");
            FacebookDialog.handleActivityResult(this.activity, v3, v3.getRequestCode(), v5, p0);
          }
          this.stopTrackingPendingAppCall();
        }
      }
    }

    private boolean handleFacebookDialogActivityResult(
            int p0,
            int p1,
            android.content.Intent p2,
            com.facebook.widget.FacebookDialog$Callback p3)
    {
      boolean v5;
      com.facebook.widget.FacebookDialog$PendingCall v7; // RETVAL
      com.facebook.widget.FacebookDialog$PendingCall v8;
      java.util.UUID v9; // RETVAL
    
      v5 = false;
      if ( this.pendingFacebookDialogCallId != null )
      {
        v7 = this.pendingFacebookDialogCallStore.getPendingCallById(this.pendingFacebookDialogCallId);
        v8 = v7;
        if ( v7 != null && v7.getRequestCode() == p0 )
        {
          if ( p2 != null )
          {
            v9 = NativeProtocol.getCallIdFromIntent(p2);
            if ( v9 != null && this.pendingFacebookDialogCallId.equals(v9) )
              FacebookDialog.handleActivityResult(this.activity, v8, p0, p2, p3);
            else
              this.cancelPendingAppCall(p3);
            this.stopTrackingPendingAppCall();
            return true;
          }
          else
          {
            this.cancelPendingAppCall(p3);
            return true;
          }
        }
      }
      return v5;
    }

    private void stopTrackingPendingAppCall()
    {
      this.pendingFacebookDialogCallStore.stopTrackingPendingCall(this.pendingFacebookDialogCallId);
      this.pendingFacebookDialogCallId = null;
    }

    public com.facebook.AppEventsLogger getAppEventsLogger()
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession == null )
        return null;
      if ( this.appEventsLogger == null || !this.appEventsLogger.isValidForSession(ActiveSession) )
      {
        if ( this.appEventsLogger != null )
          AppEventsLogger.onContextStop();
        this.appEventsLogger = AppEventsLogger.newLogger(this.activity, v2);
      }
      return this.appEventsLogger;
    }

    public void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      this.onActivityResult(p0, p1, p2, null);
    }

    public void onActivityResult(
            int p0,
            int p1,
            android.content.Intent p2,
            com.facebook.widget.FacebookDialog$Callback p3)
    {
      com.facebook.Session ActiveSession; // RETVAL
    
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
        ActiveSession.onActivityResult(this.activity, p0, p1, p2);
      if ( !LikeActionController.handleOnActivityResult(this.activity, p0, p1, p2) )
        this.handleFacebookDialogActivityResult(p0, p1, p2, p3);
    }

    public void onCreate(android.os.Bundle p0)
    {
      com.facebook.Session ActiveSession;
      String String; // RETVAL
    
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession == null )
      {
        if ( p0 != null )
          ActiveSession = Session.restoreSession(this.activity, null, this.callback, p0);
        if ( ActiveSession == null )
          ActiveSession = new com.facebook.Session(this.activity);
        Session.setActiveSession(ActiveSession);
      }
      if ( p0 != null )
      {
        String = p0.getString("com.facebook.UiLifecycleHelper.pendingFacebookDialogCallKey");
        if ( String != null )
          this.pendingFacebookDialogCallId = UUID.fromString(String);
        this.pendingFacebookDialogCallStore.restoreFromSavedInstanceState(p0);
      }
    }

    public void onDestroy()
    {
      ;
    }

    public void onPause()
    {
      com.facebook.Session ActiveSession; // RETVAL
    
      this.broadcastManager.unregisterReceiver(this.receiver);
      if ( this.callback != null )
      {
        ActiveSession = Session.getActiveSession();
        if ( ActiveSession != null )
          ActiveSession.removeCallback(this.callback);
      }
    }

    public void onResume()
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      android.content.IntentFilter v3;
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession != null )
      {
        if ( this.callback != null )
          ActiveSession.addCallback(this.callback);
        if ( SessionState.CREATED_TOKEN_LOADED.equals(ActiveSession.getState()) )
          v2.openForRead(null);
      }
      v3 = new android.content.IntentFilter();
      v3.addAction("com.facebook.sdk.ACTIVE_SESSION_SET");
      v3.addAction("com.facebook.sdk.ACTIVE_SESSION_UNSET");
      this.broadcastManager.registerReceiver(this.receiver, v3);
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      Session.saveSession(Session.getActiveSession(), p0);
      if ( this.pendingFacebookDialogCallId != null )
        p0.putString("com.facebook.UiLifecycleHelper.pendingFacebookDialogCallKey", this.pendingFacebookDialogCallId.toString());
      this.pendingFacebookDialogCallStore.saveInstanceState(p0);
    }

    public void onStop()
    {
      AppEventsLogger.onContextStop();
    }

    public void trackPendingDialogCall(com.facebook.widget.FacebookDialog$PendingCall p0)
    {
      if ( this.pendingFacebookDialogCallId != null )
      {
        Log.i("Facebook", "Tracking new app call while one is still pending; canceling pending call.");
        this.cancelPendingAppCall(null);
      }
      if ( p0 != null )
      {
        this.pendingFacebookDialogCallId = p0.getCallId();
        this.pendingFacebookDialogCallStore.trackPendingCall(p0);
      }
    }

}
