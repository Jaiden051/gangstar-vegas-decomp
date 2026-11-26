// Decompiled from classes.dex (SourceFile: WebDialog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.net.Uri;
import com.facebook.internal.ServerProtocol;
import com.facebook.internal.Utility;
public class WebDialog extends android.app.Dialog {
    // Fields
    private static int API_EC_DIALOG_CANCEL;
    private static int BACKGROUND_GRAY;
    static java.lang.String CANCEL_URI;
    public static int DEFAULT_THEME;
    static boolean DISABLE_SSL_CHECK_FOR_TESTING;
    private static java.lang.String DISPLAY_TOUCH;
    private static int MAX_PADDING_SCREEN_HEIGHT;
    private static int MAX_PADDING_SCREEN_WIDTH;
    private static double MIN_SCALE_FACTOR;
    private static int NO_PADDING_SCREEN_HEIGHT;
    private static int NO_PADDING_SCREEN_WIDTH;
    static java.lang.String REDIRECT_URI;
    private static java.lang.String WD_LOG_TAG;
    private android.widget.FrameLayout contentFrameLayout;
    private android.widget.ImageView crossImageView;
    private java.lang.String expectedRedirectUrl;
    private boolean isDetached;
    private boolean isDismissed;
    private boolean listenerCalled;
    private com.facebook.widget.WebDialog$OnCompleteListener onCompleteListener;
    private android.app.ProgressDialog spinner;
    private java.lang.String url;
    private android.webkit.WebView webView;

    // Methods
    public WebDialog(android.content.Context p0, String p1)
    {
      this(p0, p1, 16973840);
    }

    public WebDialog(android.content.Context p0, String p1, int p2)
    {
      super(p0, p2);
      this.expectedRedirectUrl = "fbconnect://success";
      this.listenerCalled = false;
      this.isDetached = false;
      this.isDismissed = false;
      this.url = p1;
    }

    public WebDialog(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2,
            int p3,
            com.facebook.widget.WebDialog$OnCompleteListener p4)
    {
      super(p0, p3);
      this.expectedRedirectUrl = "fbconnect://success";
      this.listenerCalled = false;
      this.isDetached = false;
      this.isDismissed = false;
      if ( p2 == null )
        p2 = new android.os.Bundle();
      p2.putString("redirect_uri", "fbconnect://success");
      p2.putString("display", "touch");
      this.url = Utility.buildUri(ServerProtocol.getDialogAuthority(), ServerProtocol.getAPIVersion() + "/dialog/" + p1, p2).toString();
      this.onCompleteListener = p4;
    }

    /* synthetic */ static String access$100(com.facebook.widget.WebDialog p0)
    {
      return p0.expectedRedirectUrl;
    }

    /* synthetic */ static boolean access$200(com.facebook.widget.WebDialog p0)
    {
      return p0.isDetached;
    }

    /* synthetic */ static android.app.ProgressDialog access$300(com.facebook.widget.WebDialog p0)
    {
      return p0.spinner;
    }

    /* synthetic */ static android.widget.FrameLayout access$400(com.facebook.widget.WebDialog p0)
    {
      return p0.contentFrameLayout;
    }

    /* synthetic */ static android.webkit.WebView access$500(com.facebook.widget.WebDialog p0)
    {
      return p0.webView;
    }

    /* synthetic */ static android.widget.ImageView access$600(com.facebook.widget.WebDialog p0)
    {
      return p0.crossImageView;
    }

    private void calculateSize()
    {
      android.util.DisplayMetrics v1;
      int heightPixels;
      int widthPixels;
      v1 = new android.util.DisplayMetrics();
      ((android.view.WindowManager)this.getContext().getSystemService("window")).getDefaultDisplay().getMetrics(v1);
      if ( v1.widthPixels >= v1.heightPixels )
        heightPixels = v1.heightPixels;
      else
        heightPixels = v1.widthPixels;
      if ( v1.widthPixels >= v1.heightPixels )
        widthPixels = v1.widthPixels;
      else
        widthPixels = v1.heightPixels;
      this.getWindow().setLayout(Math.min(this.getScaledSize(heightPixels, v1.density, 480, 800), v1.widthPixels), Math.min(this.getScaledSize(widthPixels, v1.density, 800, 1280), v1.heightPixels));
    }

    private void createCrossImage()
    {
      this.crossImageView = new android.widget.ImageView(this.getContext());
      this.crossImageView.setOnClickListener((android.view.View.OnClickListener)new com.facebook.widget.WebDialog$2(this));
      this.crossImageView.setImageDrawable(this.getContext().getResources().getDrawable(2130837528));
      this.crossImageView.setVisibility(4);
    }

    private int getScaledSize(int p0, float p1, int p2, int p3)
    {
      double v5;
      int v6;
      v5 = 0.5;
      v6 = (int)((float)p0 / p1);
      if ( v6 > p2 )
      {
        if ( v6 < p3 )
          v5 = (double)(p3 - v6) / (double)(p3 - p2) * 0.5 + 0.5;
      }
      else
      {
        v5 = 1.0;
      }
      return (int)(v5 * (double)p0);
    }

    private void setUpWebView(int p0)
    {
      android.widget.LinearLayout v2;
      v2 = new android.widget.LinearLayout(this.getContext());
      this.webView = new com.facebook.widget.WebDialog$3(this, this.getContext());
      this.webView.setVerticalScrollBarEnabled(false);
      this.webView.setHorizontalScrollBarEnabled(false);
      this.webView.setWebViewClient(new com.facebook.widget.WebDialog$DialogWebViewClient(this, null));
      this.webView.getSettings().setJavaScriptEnabled(true);
      this.webView.loadUrl(this.url);
      this.webView.setLayoutParams(new android.widget.FrameLayout.LayoutParams(-1, -1));
      this.webView.setVisibility(4);
      this.webView.getSettings().setSavePassword(false);
      this.webView.getSettings().setSaveFormData(false);
      v2.setPadding(p0, p0, p0, p0);
      v2.addView(this.webView);
      v2.setBackgroundColor(-872415232);
      this.contentFrameLayout.addView(v2);
    }

    public void dismiss()
    {
      if ( !this.isDismissed )
      {
        this.isDismissed = true;
        if ( !this.listenerCalled )
          this.sendCancelToListener();
        if ( this.webView != null )
          this.webView.stopLoading();
        if ( !this.isDetached )
        {
          if ( this.spinner.isShowing() )
            this.spinner.dismiss();
          super.dismiss();
        }
      }
    }

    public com.facebook.widget.WebDialog$OnCompleteListener getOnCompleteListener()
    {
      return this.onCompleteListener;
    }

    protected android.webkit.WebView getWebView()
    {
      return this.webView;
    }

    protected boolean isListenerCalled()
    {
      return this.listenerCalled;
    }

    public void onAttachedToWindow()
    {
      this.isDetached = false;
      super.onAttachedToWindow();
    }

    protected void onCreate(android.os.Bundle p0)
    {
      super.onCreate(p0);
      this.spinner = new android.app.ProgressDialog(this.getContext());
      this.spinner.requestWindowFeature(1);
      this.spinner.setMessage(this.getContext().getString(2131165514));
      this.spinner.setOnCancelListener((android.content.DialogInterface.OnCancelListener)new com.facebook.widget.WebDialog$1(this));
      this.requestWindowFeature(1);
      this.contentFrameLayout = new android.widget.FrameLayout(this.getContext());
      this.calculateSize();
      this.getWindow().setGravity(17);
      this.getWindow().setSoftInputMode(16);
      this.createCrossImage();
      this.setUpWebView(this.crossImageView.getDrawable().getIntrinsicWidth() / 2 + 1);
      this.contentFrameLayout.addView(this.crossImageView, new android.view.ViewGroup.LayoutParams(-2, -2));
      this.setContentView(this.contentFrameLayout);
    }

    public void onDetachedFromWindow()
    {
      this.isDetached = true;
      super.onDetachedFromWindow();
    }

    protected android.os.Bundle parseResponseUri(String p0)
    {
      android.net.Uri v2;
      android.os.Bundle String;
      v2 = Uri.parse(p0);
      String = Utility.parseUrlQueryString(v2.getQuery());
      String.putAll(Utility.parseUrlQueryString(v2.getFragment()));
      return String;
    }

    protected void sendCancelToListener()
    {
      this.sendErrorToListener(new com.facebook.FacebookOperationCanceledException());
    }

    protected void sendErrorToListener(Throwable p0)
    {
      com.facebook.FacebookException v2;
      if ( this.onCompleteListener != null && !this.listenerCalled )
      {
        this.listenerCalled = true;
        if ( p0 instanceof com.facebook.FacebookException )
          v2 = (com.facebook.FacebookException)p0;
        else
          v2 = new com.facebook.FacebookException(p0);
        this.onCompleteListener.onComplete(null, v2);
        this.dismiss();
      }
    }

    protected void sendSuccessToListener(android.os.Bundle p0)
    {
      if ( this.onCompleteListener != null && !this.listenerCalled )
      {
        this.listenerCalled = true;
        this.onCompleteListener.onComplete(p0, null);
        this.dismiss();
      }
    }

    protected void setExpectedRedirectUrl(String p0)
    {
      this.expectedRedirectUrl = p0;
    }

    public void setOnCompleteListener(com.facebook.widget.WebDialog$OnCompleteListener p0)
    {
      this.onCompleteListener = p0;
    }

}
