// Decompiled from classes.dex (SourceFile: FacebookWebFallbackDialog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.net.Uri;
import android.os.Looper;
public class FacebookWebFallbackDialog extends com.facebook.widget.WebDialog {
    // Fields
    private static int OS_BACK_BUTTON_RESPONSE_TIMEOUT_MILLISECONDS;
    private static final java.lang.String TAG;
    private boolean waitingForDialogToClose;

    // Methods
    static
    {
      TAG = com.facebook.internal.FacebookWebFallbackDialog.class.getName();
    }

    private FacebookWebFallbackDialog(android.content.Context p0, String p1, String p2)
    {
      super(p0, p1);
      this.setExpectedRedirectUrl(p2);
    }

    /* synthetic */ static boolean access$000(com.facebook.internal.FacebookWebFallbackDialog p0)
    {
      return p0.isListenerCalled();
    }

    /* synthetic */ static void access$100(com.facebook.internal.FacebookWebFallbackDialog p0)
    {
      p0.sendCancelToListener();
    }

    public static boolean presentWebFallback(
            android.content.Context p0,
            String p1,
            String p2,
            com.facebook.widget.FacebookDialog$PendingCall p3,
            com.facebook.widget.FacebookDialog$Callback p4)
    {
      boolean v5;
      Object[] v7;
      com.facebook.internal.FacebookWebFallbackDialog v8;
      v5 = false;
      if ( !Utility.isNullOrEmpty(p1) )
      {
        v7 = new Object[1];
        v7[0] = p2;
        v8 = new com.facebook.internal.FacebookWebFallbackDialog(p0, p1, String.format("fb%s://bridge/", v7));
        v8.setOnCompleteListener((com.facebook.widget.WebDialog$OnCompleteListener)new com.facebook.internal.FacebookWebFallbackDialog$1(p0, p3, p4));
        v8.show();
        return true;
      }
      return v5;
    }

    public void dismiss()
    {
      android.webkit.WebView WebView;
      WebView = this.getWebView();
      if ( !this.isListenerCalled() && WebView != null && WebView.isShown() )
      {
        if ( !this.waitingForDialogToClose )
        {
          this.waitingForDialogToClose = true;
          WebView.loadUrl("javascript:"
                        + "(function() {  var event = document.createEvent('Event');  event.initEvent('fbPlatformDialogMustCl" +
                          "ose',true,true);  document.dispatchEvent(event);})();");
          new android.os.Handler(Looper.getMainLooper()).postDelayed((Runnable)new com.facebook.internal.FacebookWebFallbackDialog$2(this), 1500);
        }
      }
      else
      {
        super.dismiss();
      }
    }

    protected android.os.Bundle parseResponseUri(String p0)
    {
      android.os.Bundle String;
      String v3;
      String v4;
      String = Utility.parseUrlQueryString(Uri.parse(p0).getQuery());
      v3 = String.getString("bridge_args");
      String.remove("bridge_args");
      if ( !Utility.isNullOrEmpty(v3) )
      {
        try
        {
          String.putBundle("com.facebook.platform.protocol.BRIDGE_ARGS", BundleJSONConverter.convertToBundle(new org.json.JSONObject(v3)));
        }
        catch ( org.json.JSONException v6 )
        {
          Utility.logd(TAG, "Unable to parse bridge_args JSON", v6);
        }
      }
      v4 = String.getString("method_results");
      String.remove("method_results");
      if ( !Utility.isNullOrEmpty(v4) )
      {
        if ( Utility.isNullOrEmpty(v4) )
          v4 = "{}";
        try
        {
          String.putBundle("com.facebook.platform.protocol.RESULT_ARGS", BundleJSONConverter.convertToBundle(new org.json.JSONObject(v4)));
        }
        catch ( org.json.JSONException v7 )
        {
          Utility.logd(TAG, "Unable to parse bridge_args JSON", v7);
        }
      }
      String.remove("version");
      String.putInt("com.facebook.platform.protocol.PROTOCOL_VERSION", NativeProtocol.getLatestKnownVersion());
      return String;
    }

}
