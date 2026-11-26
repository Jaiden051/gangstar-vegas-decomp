// Decompiled from classes.dex (SourceFile: WebDialog$DialogWebViewClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.net.Uri;
import com.facebook.internal.Utility;
class WebDialog$DialogWebViewClient extends android.webkit.WebViewClient {
    // Fields
    final com.facebook.widget.WebDialog this$0;

    // Methods
    private WebDialog$DialogWebViewClient(com.facebook.widget.WebDialog p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ WebDialog$DialogWebViewClient(com.facebook.widget.WebDialog p0, com.facebook.widget.WebDialog$1 p1)
    {
      this(p0);
    }

    public void onPageFinished(android.webkit.WebView p0, String p1)
    {
      super.onPageFinished(p0, p1);
      if ( !WebDialog.access$200(this.this$0) )
        WebDialog.access$300(this.this$0).dismiss();
      WebDialog.access$400(this.this$0).setBackgroundColor(0);
      WebDialog.access$500(this.this$0).setVisibility(0);
      WebDialog.access$600(this.this$0).setVisibility(0);
    }

    public void onPageStarted(
            android.webkit.WebView p0,
            String p1,
            android.graphics.Bitmap p2)
    {
      Utility.logd("FacebookSDK.WebDialog", "Webview loading URL: " + p1);
      super.onPageStarted(p0, p1, p2);
      if ( !WebDialog.access$200(this.this$0) )
        WebDialog.access$300(this.this$0).show();
    }

    public void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      super.onReceivedError(p0, p1, p2, p3);
      this.this$0.sendErrorToListener(new com.facebook.FacebookDialogException(p2, p1, p3));
    }

    public void onReceivedSslError(
            android.webkit.WebView p0,
            android.webkit.SslErrorHandler p1,
            android.net.http.SslError p2)
    {
      super.onReceivedSslError(p0, p1, p2);
      p1.cancel();
      this.this$0.sendErrorToListener(new com.facebook.FacebookDialogException(null, -11, null));
    }

    public boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      android.os.Bundle v3;
      String String;
      String v5;
      String v6;
      int v7;
      Utility.logd("FacebookSDK.WebDialog", "Redirect URL: " + p1);
      if ( !p1.startsWith(WebDialog.access$100(this.this$0)) )
      {
        if ( p1.startsWith("fbconnect://cancel") )
        {
          this.this$0.sendCancelToListener();
          return true;
        }
        else if ( p1.contains("touch") )
        {
          return false;
        }
        else
        {
          this.this$0.getContext().startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1)));
          return true;
        }
      }
      v3 = this.this$0.parseResponseUri(p1);
      String = v3.getString("error");
      if ( String == null )
        String = v3.getString("error_type");
      v5 = v3.getString("error_msg");
      if ( v5 == null )
        v5 = v3.getString("error_description");
      v6 = v3.getString("error_code");
      if ( Utility.isNullOrEmpty(v6) )
      {
        v7 = -1;
      }
      else
      {
        try
        {
          v7 = Integer.parseInt(v6);
        }
        catch ( NumberFormatException e )
        {
          v7 = -1;
        }
      }
      if ( Utility.isNullOrEmpty(String) && Utility.isNullOrEmpty(v5) && v7 == -1 )
      {
        this.this$0.sendSuccessToListener(v3);
      }
      else if ( String != null && (String.equals("access_denied") || String.equals("OAuthAccessDeniedException"))
             || v7 == 4201 )
      {
        this.this$0.sendCancelToListener();
      }
      else
      {
        this.this$0.sendErrorToListener(new com.facebook.FacebookServiceException(new com.facebook.FacebookRequestError(v7, String, v5), v5));
      }
      return true;
    }

}
