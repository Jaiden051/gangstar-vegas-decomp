// Decompiled from classes.dex (SourceFile: LoginActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.util.Log;
public class LoginActivity extends android.app.Activity {
    // Fields
    private static java.lang.String EXTRA_REQUEST;
    private static java.lang.String NULL_CALLING_PKG_ERROR_MSG;
    static java.lang.String RESULT_KEY;
    private static java.lang.String SAVED_AUTH_CLIENT;
    private static java.lang.String SAVED_CALLING_PKG_KEY;
    private static final java.lang.String TAG;
    private com.facebook.AuthorizationClient authorizationClient;
    private java.lang.String callingPackage;
    private com.facebook.AuthorizationClient$AuthorizationRequest request;

    // Methods
    static
    {
      TAG = com.facebook.LoginActivity.class.getName();
    }

    public LoginActivity()
    {
      super();
    }

    /* synthetic */ static void access$000(
            com.facebook.LoginActivity p0,
            com.facebook.AuthorizationClient$Result p1)
    {
      p0.onAuthClientCompleted(p1);
    }

    private void onAuthClientCompleted(com.facebook.AuthorizationClient$Result p0)
    {
      int v2;
      android.os.Bundle v3;
      android.content.Intent v4;
      this.request = null;
      if ( p0.code == AuthorizationClient$Result$Code.CANCEL )
        v2 = 0;
      else
        v2 = -1;
      v3 = new android.os.Bundle();
      v3.putSerializable("com.facebook.LoginActivity:Result", (java.io.Serializable)p0);
      v4 = new android.content.Intent();
      v4.putExtras(v3);
      this.setResult(v2, v4);
      this.finish();
    }

    static android.os.Bundle populateIntentExtras(com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putSerializable("request", (java.io.Serializable)p0);
      return v1;
    }

    protected void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      this.authorizationClient.onActivityResult(p0, p1, p2);
    }

    public void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.setContentView(2);
      if ( p0 != null )
      {
        this.callingPackage = p0.getString("callingPackage");
        this.authorizationClient = (com.facebook.AuthorizationClient)p0.getSerializable("authorizationClient");
      }
      else
      {
        this.callingPackage = this.getCallingPackage();
        this.authorizationClient = new com.facebook.AuthorizationClient();
        this.request = (com.facebook.AuthorizationClient$AuthorizationRequest)this.getIntent().getSerializableExtra("request");
      }
      this.authorizationClient.setContext(this);
      this.authorizationClient.setOnCompletedListener((com.facebook.AuthorizationClient$OnCompletedListener)new com.facebook.LoginActivity$1(this));
      this.authorizationClient.setBackgroundProcessingListener((com.facebook.AuthorizationClient$BackgroundProcessingListener)new com.facebook.LoginActivity$2(this));
    }

    public void onPause()
    {
      super.onPause();
      this.authorizationClient.cancelCurrentHandler();
      this.findViewById(2131427367).setVisibility(8);
    }

    public void onResume()
    {
      super.onResume();
      if ( this.callingPackage != null )
      {
        this.authorizationClient.startOrContinueAuth(this.request);
      }
      else
      {
        Log.e(
          TAG,
          "Cannot call LoginActivity with a null calling package. This can occur if the launchMode of the caller is singleInstance.");
        this.finish();
      }
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      super.onSaveInstanceState(p0);
      p0.putString("callingPackage", this.callingPackage);
      p0.putSerializable("authorizationClient", (java.io.Serializable)this.authorizationClient);
    }

}
