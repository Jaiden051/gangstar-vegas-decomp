// Decompiled from classes.dex (SourceFile: MRAIDView.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import android.graphics.BitmapFactory;
import android.os.Build;
import android.os.Looper;
import android.text.TextUtils;
import android.util.Base64;
import android.util.TypedValue;
import android.widget.ImageView;
import com.gameloft.glads.mraid.internal.MRAIDHtmlProcessor;
import com.gameloft.glads.mraid.internal.MRAIDLog;
import com.gameloft.glads.mraid.properties.MRAIDOrientationProperties;
import com.gameloft.glads.mraid.properties.MRAIDResizeProperties;
import java.net.URLDecoder;
import java.util.Arrays;
public class MRAIDView extends android.widget.RelativeLayout {
    // Fields
    private static int CLOSE_REGION_SIZE;
    public static java.lang.String JAVASCRIPT_TRACKING;
    private static java.lang.String JS_INTERFACE_NAME;
    public static final java.lang.CharSequence MRAID_TRACKING_STRING;
    private static int STATE_DEFAULT;
    private static int STATE_EXPANDED;
    private static int STATE_HIDDEN;
    private static int STATE_LOADING;
    private static int STATE_RESIZED;
    private static java.lang.String TAG;
    public static java.lang.String VERSION;
    private java.lang.String baseUrl;
    private android.widget.ImageButton closeRegion;
    private int contentViewTop;
    private android.content.Context context;
    private android.graphics.Rect currentPosition;
    private android.webkit.WebView currentWebView;
    private android.graphics.Rect defaultPosition;
    private android.util.DisplayMetrics displayMetrics;
    private android.widget.RelativeLayout expandedView;
    private android.view.GestureDetector gestureDetector;
    private android.os.Handler handler;
    private boolean isActionBarShowing;
    private boolean isClosing;
    private boolean isExpandingFromDefault;
    private boolean isExpandingPart2;
    private boolean isForceNotFullScreen;
    private boolean isForcingFullScreen;
    private boolean isFullScreen;
    private final boolean isInterstitial;
    private boolean isLaidOut;
    private boolean isPageFinished;
    private boolean isViewable;
    private com.gameloft.glads.mraid.MRAIDViewListener listener;
    private com.gameloft.glads.mraid.MRAIDView$TrackingData mMRAIDTrackingData;
    private com.gameloft.glads.mraid.MRAIDView$Size maxSize;
    private java.lang.String mraidJs;
    private com.gameloft.glads.mraid.MRAIDView$MRAIDWebChromeClient mraidWebChromeClient;
    private com.gameloft.glads.mraid.MRAIDView$MRAIDWebViewClient mraidWebViewClient;
    private com.gameloft.glads.mraid.MRAIDNativeFeatureListener nativeFeatureListener;
    private com.gameloft.glads.mraid.internal.MRAIDNativeFeatureManager nativeFeatureManager;
    private com.gameloft.glads.mraid.properties.MRAIDOrientationProperties orientationProperties;
    private int origTitleBarVisibility;
    private final int originalRequestedOrientation;
    private com.gameloft.glads.mraid.properties.MRAIDResizeProperties resizeProperties;
    private android.widget.RelativeLayout resizedView;
    private com.gameloft.glads.mraid.MRAIDView$Size screenSize;
    private int state;
    private android.view.View titleBar;
    private boolean useCustomClose;
    private android.webkit.WebView webView;
    private android.webkit.WebView webViewPart2;

    // Methods
    static
    {
      MRAID_TRACKING_STRING = "mraidTracking";
    }

    public MRAIDView(
            android.content.Context p0,
            String p1,
            String p2,
            String[] p3,
            com.gameloft.glads.mraid.MRAIDViewListener p4,
            com.gameloft.glads.mraid.MRAIDNativeFeatureListener p5)
    {
      this(p0, p1, p2, p3, p4, p5, false);
    }

    protected MRAIDView(
            android.content.Context p0,
            String p1,
            String p2,
            String[] p3,
            com.gameloft.glads.mraid.MRAIDViewListener p4,
            com.gameloft.glads.mraid.MRAIDNativeFeatureListener p5,
            boolean p6)
    {
      super(p0);
      this.context = p0;
      this.baseUrl = p1;
      this.isInterstitial = p6;
      this.state = 0;
      this.isViewable = false;
      this.useCustomClose = false;
      this.orientationProperties = new com.gameloft.glads.mraid.properties.MRAIDOrientationProperties();
      this.resizeProperties = new com.gameloft.glads.mraid.properties.MRAIDResizeProperties();
      this.nativeFeatureManager = new com.gameloft.glads.mraid.internal.MRAIDNativeFeatureManager(p0, Arrays.asList(p3));
      this.listener = p4;
      this.nativeFeatureListener = p5;
      this.displayMetrics = new android.util.DisplayMetrics();
      ((android.app.Activity)p0).getWindowManager().getDefaultDisplay().getMetrics(this.displayMetrics);
      this.currentPosition = new android.graphics.Rect();
      this.defaultPosition = new android.graphics.Rect();
      this.maxSize = new com.gameloft.glads.mraid.MRAIDView$Size(this, 0);
      this.screenSize = new com.gameloft.glads.mraid.MRAIDView$Size(this, 0);
      if ( p0 instanceof android.app.Activity )
        this.originalRequestedOrientation = ((android.app.Activity)p0).getRequestedOrientation();
      else
        this.originalRequestedOrientation = -1;
      MRAIDLog.d("MRAIDView", "originalRequestedOrientation " + getOrientationString(this.originalRequestedOrientation));
      this.gestureDetector = new android.view.GestureDetector(this.getContext(), new com.gameloft.glads.mraid.MRAIDView$1(this));
      this.handler = new android.os.Handler(Looper.getMainLooper());
      this.mraidWebChromeClient = new com.gameloft.glads.mraid.MRAIDView$MRAIDWebChromeClient(this, 0);
      this.mraidWebViewClient = new com.gameloft.glads.mraid.MRAIDView$MRAIDWebViewClient(this, 0);
      this.webView = this.createWebView();
      this.currentWebView = this.webView;
      this.addView(this.webView);
      this.injectMraidJs(this.webView);
      this.webView.loadDataWithBaseURL(p1, MRAIDHtmlProcessor.processRawHtml(p2), "text/html", "UTF-8", null);
      this.mMRAIDTrackingData = new com.gameloft.glads.mraid.MRAIDView$TrackingData(this);
      this.webView.addJavascriptInterface(new com.gameloft.glads.mraid.MRAIDView$1GLAdsJSInterface(this, this.mMRAIDTrackingData), "GLAdsTracking");
    }

    /* synthetic */ static void access$1000(com.gameloft.glads.mraid.MRAIDView p0, android.webkit.WebView p1)
    {
      p0.pauseWebView(p1);
    }

    /* synthetic */ static int access$1100(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.state;
    }

    /* synthetic */ static int access$1102(com.gameloft.glads.mraid.MRAIDView p0, int p1)
    {
      p0.state = p1;
      return p1;
    }

    /* synthetic */ static void access$1200(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.closeFromResized();
    }

    /* synthetic */ static String access$1300(com.gameloft.glads.mraid.MRAIDView p0, String p1)
    {
      return p0.getStringFromUrl(p1);
    }

    /* synthetic */ static void access$1400(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.removeResizeView();
    }

    /* synthetic */ static android.webkit.WebView access$1500(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.webView;
    }

    /* synthetic */ static android.webkit.WebView access$1600(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.webViewPart2;
    }

    /* synthetic */ static android.webkit.WebView access$1602(
            com.gameloft.glads.mraid.MRAIDView p0,
            android.webkit.WebView p1)
    {
      p0.webViewPart2 = p1;
      return p1;
    }

    /* synthetic */ static android.webkit.WebView access$1700(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.createWebView();
    }

    /* synthetic */ static void access$1800(com.gameloft.glads.mraid.MRAIDView p0, android.webkit.WebView p1)
    {
      p0.injectMraidJs(p1);
    }

    /* synthetic */ static String access$1900(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.baseUrl;
    }

    /* synthetic */ static android.webkit.WebView access$2002(
            com.gameloft.glads.mraid.MRAIDView p0,
            android.webkit.WebView p1)
    {
      p0.currentWebView = p1;
      return p1;
    }

    /* synthetic */ static boolean access$2100(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.isExpandingPart2;
    }

    /* synthetic */ static boolean access$2102(com.gameloft.glads.mraid.MRAIDView p0, boolean p1)
    {
      p0.isExpandingPart2 = p1;
      return p1;
    }

    /* synthetic */ static void access$2200(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.expandHelper();
    }

    /* synthetic */ static void access$2300(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.fireStateChangeEvent();
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDViewListener access$2400(
            com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.listener;
    }

    /* synthetic */ static void access$2500(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.close();
    }

    /* synthetic */ static boolean access$2602(com.gameloft.glads.mraid.MRAIDView p0, boolean p1)
    {
      p0.isPageFinished = p1;
      return p1;
    }

    /* synthetic */ static void access$2700(com.gameloft.glads.mraid.MRAIDView p0, String p1)
    {
      p0.injectJavaScript(p1);
    }

    /* synthetic */ static void access$2800(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setSupportedServices();
    }

    /* synthetic */ static boolean access$2900(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.isLaidOut;
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDNativeFeatureListener access$300(
            com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.nativeFeatureListener;
    }

    /* synthetic */ static void access$3000(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setScreenSize();
    }

    /* synthetic */ static void access$3100(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setMaxSize();
    }

    /* synthetic */ static void access$3200(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setCurrentPosition();
    }

    /* synthetic */ static void access$3300(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setDefaultPosition();
    }

    /* synthetic */ static void access$3400(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.fireReadyEvent();
    }

    /* synthetic */ static boolean access$3500(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.isViewable;
    }

    /* synthetic */ static void access$3600(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.fireViewableChangeEvent();
    }

    /* synthetic */ static android.os.Handler access$3700(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.handler;
    }

    /* synthetic */ static void access$3800(com.gameloft.glads.mraid.MRAIDView p0, String p1)
    {
      p0.parseCommandUrl(p1);
    }

    /* synthetic */ static com.gameloft.glads.mraid.internal.MRAIDNativeFeatureManager access$3900(
            com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.nativeFeatureManager;
    }

    /* synthetic */ static void access$400(
            com.gameloft.glads.mraid.MRAIDView p0,
            android.webkit.WebView p1,
            boolean p2,
            int p3,
            int p4,
            int p5,
            int p6)
    {
      p0.onLayoutWebView(p1, p2, p3, p4, p5, p6);
    }

    /* synthetic */ static void access$4000(com.gameloft.glads.mraid.MRAIDView p0)
    {
      p0.setResizedViewPosition();
    }

    /* synthetic */ static boolean access$500(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.isInterstitial;
    }

    /* synthetic */ static android.util.DisplayMetrics access$600(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.displayMetrics;
    }

    /* synthetic */ static android.content.Context access$700(com.gameloft.glads.mraid.MRAIDView p0)
    {
      return p0.context;
    }

    /* synthetic */ static String access$800(int p0)
    {
      return getVisibilityString(p0);
    }

    /* synthetic */ static void access$900(com.gameloft.glads.mraid.MRAIDView p0, int p1)
    {
      p0.setViewable(p1);
    }

    private void addCloseRegion(android.view.View p0)
    {
      byte[] v2; // RETVAL
      android.graphics.Bitmap v3;
      android.graphics.drawable.BitmapDrawable v4;
      android.graphics.drawable.StateListDrawable v5;
      int[] v6;
      int[] v7;
      android.util.DisplayMetrics v8;
      this.closeRegion = new android.widget.ImageButton(this.context);
      this.closeRegion.setBackgroundColor(0);
      this.closeRegion.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.glads.mraid.MRAIDView$9(this));
      if ( p0 == this.expandedView && !this.useCustomClose )
      {
        v2 = Base64.decode(com.gameloft.glads.vast.util.Assets.exit, 0);
        v3 = BitmapFactory.decodeByteArray(v2, 0, v2.length);
        v4 = new android.graphics.drawable.BitmapDrawable(this.getResources(), v3);
        v5 = new android.graphics.drawable.StateListDrawable();
        v6 = new int[1];
        v6[0] = -16842919;
        v5.addState(v6, v4);
        v7 = new int[1];
        v7[0] = 16842919;
        v5.addState(v7, v4);
        this.closeRegion.setImageDrawable(v5);
        this.closeRegion.setScaleType(ImageView.ScaleType.CENTER_CROP);
        v8 = new android.util.DisplayMetrics();
        ((android.view.WindowManager)this.context.getSystemService("window")).getDefaultDisplay().getMetrics(v8);
        if ( Build.VERSION.SDK_INT >= 11 )
        {
          this.closeRegion.setScaleX((float)v8.densityDpi * 0.35f / (float)v3.getWidth());
          this.closeRegion.setScaleY((float)v8.densityDpi * 0.35f / (float)v3.getHeight());
        }
      }
      ((android.view.ViewGroup)p0).addView(this.closeRegion);
    }

    private void applyOrientationProperties()
    {
      int v1 = 0;
      android.app.Activity v2 = null;
      boolean v3;
      StringBuilder v4;
      String v5;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = 1;
            MRAIDLog.d(
            "MRAIDView",
            "applyOrientationProperties "
            + this.orientationProperties.allowOrientationChange
            + " "
            + this.orientationProperties.forceOrientationString());
            v2 = (android.app.Activity)this.context;
            v3 = (this.getResources().getConfiguration()).orientation == 1;
            v4 = new StringBuilder("currentOrientation ");
            if ( v3 )
            v5 = "portrait";
            else
            v5 = "landscape";
            MRAIDLog.d("MRAIDView", v4.append(v5).toString());
            if ( this.orientationProperties.forceOrientation != 0 )
            {
            if ( this.orientationProperties.forceOrientation != 1 )
            {
            if ( this.orientationProperties.allowOrientationChange )
            {
            v1 = -1;
            { _pc = 1; continue _sm; }
            }
            if ( v3 )
            { _pc = 1; continue _sm; }
            }
            v1 = 0;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v2.setRequestedOrientation(v1);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    private void calculateMaxSize()
    {
      android.graphics.Rect v1;
      android.view.Window Window;
      int v3;
      int v4;
      int v5;
      v1 = new android.graphics.Rect();
      Window = ((android.app.Activity)this.context).getWindow();
      Window.getDecorView().getWindowVisibleDisplayFrame(v1);
      MRAIDLog.d(
        "MRAIDView",
        "calculateMaxSize frame ["
      + v1.left
      + ","
      + v1.top
      + "]["
      + v1.right
      + ","
      + v1.bottom
      + "] ("
      + v1.width()
      + "x"
      + v1.height()
      + ")");
      v3 = v1.top;
      this.contentViewTop = Window.findViewById(16908290).getTop();
      MRAIDLog.d("MRAIDView", "calculateMaxSize statusHeight " + v3);
      MRAIDLog.d("MRAIDView", "calculateMaxSize titleHeight " + (this.contentViewTop - v3));
      MRAIDLog.d("MRAIDView", "calculateMaxSize contentViewTop " + this.contentViewTop);
      v4 = v1.width();
      v5 = this.screenSize.height - this.contentViewTop;
      MRAIDLog.d("MRAIDView", "calculateMaxSize max size " + v4 + "x" + v5);
      if ( v4 != this.maxSize.width || v5 != this.maxSize.height )
      {
        this.maxSize.width = v4;
        this.maxSize.height = v5;
        if ( this.isPageFinished )
          this.setMaxSize();
      }
    }

    private void calculatePosition(boolean p0)
    {
      int[] v2;
      android.view.View currentWebView;
      String v4;
      int v5;
      int v6;
      int v7;
      int Width;
      int Height;
      android.graphics.Rect currentPosition;
      v2 = new int[2];
      if ( p0 )
        currentWebView = this.currentWebView;
      else
        currentWebView = this;
      if ( p0 )
        v4 = "current";
      else
        v4 = "default";
      currentWebView.getLocationOnScreen(v2);
      v5 = v2[0];
      v6 = v2[1];
      MRAIDLog.d("MRAIDView", "calculatePosition " + v4 + " locationOnScreen [" + v5 + "," + v6 + "]");
      MRAIDLog.d("MRAIDView", "calculatePosition " + v4 + " contentViewTop " + this.contentViewTop);
      if ( v6 >= this.contentViewTop )
      {
        v7 = v6 - this.contentViewTop;
        Width = currentWebView.getWidth();
        Height = currentWebView.getHeight();
        MRAIDLog.d(
          "MRAIDView",
          "calculatePosition " + v4 + " position [" + v5 + "," + v7 + "] (" + Width + "x" + Height + ")");
        if ( p0 )
          currentPosition = this.currentPosition;
        else
          currentPosition = this.defaultPosition;
        if ( v5 != currentPosition.left
          || v7 != currentPosition.top
          || Width != currentPosition.width()
          || Height != currentPosition.height() )
        {
          if ( p0 )
            this.currentPosition = new android.graphics.Rect(v5, v7, Width + v5, Height + v7);
          else
            this.defaultPosition = new android.graphics.Rect(v5, v7, Width + v5, Height + v7);
          if ( this.isPageFinished )
          {
            if ( p0 )
              this.setCurrentPosition();
            else
              this.setDefaultPosition();
          }
        }
      }
      else
      {
        MRAIDLog.d("MRAIDView", "calculatePosition " + v4 + " y < contentViewTop, returning");
      }
    }

    private void calculateScreenSize()
    {
      StringBuilder v1;
      String v2;
      int widthPixels;
      int heightPixels;
      v1 = new StringBuilder("calculateScreenSize orientation ");
      if ( (this.getResources().getConfiguration()).orientation == 1 )
        v2 = "portrait";
      else
        v2 = "landscape";
      MRAIDLog.d("MRAIDView", v1.append(v2).toString());
      widthPixels = this.displayMetrics.widthPixels;
      heightPixels = this.displayMetrics.heightPixels;
      MRAIDLog.d("MRAIDView", "calculateScreenSize screen size " + widthPixels + "x" + heightPixels);
      if ( widthPixels != this.screenSize.width || heightPixels != this.screenSize.height )
      {
        this.screenSize.width = widthPixels;
        this.screenSize.height = heightPixels;
        if ( this.isPageFinished )
          this.setScreenSize();
      }
    }

    private void close()
    {
      MRAIDLog.d("MRAIDView-JS callback", "close");
      this.handler.post((Runnable)new com.gameloft.glads.mraid.MRAIDView$4(this));
    }

    private void closeFromResized()
    {
      this.state = 1;
      this.isClosing = true;
      this.removeResizeView();
      this.addView(this.webView);
      this.handler.post((Runnable)new com.gameloft.glads.mraid.MRAIDView$8(this));
    }

    private void createCalendarEvent(String p0)
    {
      MRAIDLog.d("MRAIDView-JS callback", "createCalendarEvent " + p0);
      if ( this.nativeFeatureListener != null )
        this.nativeFeatureListener.mraidNativeFeatureCreateCalendarEvent(p0);
    }

    private android.webkit.WebView createWebView()
    {
      com.gameloft.glads.mraid.MRAIDView$2 v1;
      v1 = new com.gameloft.glads.mraid.MRAIDView$2(this, this.context);
      v1.setLayoutParams(new android.widget.RelativeLayout.LayoutParams(-1, -1));
      v1.setScrollContainer(false);
      v1.setVerticalScrollBarEnabled(false);
      v1.setHorizontalScrollBarEnabled(false);
      v1.setScrollBarStyle(0x2000000);
      v1.setFocusableInTouchMode(false);
      v1.setOnTouchListener((android.view.View.OnTouchListener)new com.gameloft.glads.mraid.MRAIDView$3(this));
      v1.getSettings().setJavaScriptEnabled(true);
      v1.setWebChromeClient(this.mraidWebChromeClient);
      v1.setWebViewClient(this.mraidWebViewClient);
      return v1;
    }

    private void expand(String p0)
    {
      StringBuilder v2;
      String v3;
      String v4;
      v2 = new StringBuilder("expand ");
      if ( p0 != null )
        v3 = p0;
      else
        v3 = "(1-part)";
      MRAIDLog.d("MRAIDView-JS callback", v2.append(v3).toString());
      if ( this.isInterstitial && this.state != 0 || !this.isInterstitial && this.state != 1 && this.state != 3 )
        return;
      if ( TextUtils.isEmpty(p0) )
      {
        if ( this.isInterstitial || this.state == 1 )
        {
          this.removeView(this.webView);
        }
        else if ( this.state == 3 )
        {
          this.removeResizeView();
        }
        this.expandHelper();
        return;
      }
      try
      {
        v4 = URLDecoder.decode(p0, "UTF-8");
        if ( !v4.startsWith("http://") && !v4.startsWith("https://") )
          v4 = this.baseUrl + v4;
        new Thread((Runnable)new com.gameloft.glads.mraid.MRAIDView$5(this, v4), "2-part-content").start();
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
      }
    }

    private void expandHelper()
    {
      if ( !this.isInterstitial )
        this.state = 2;
      this.applyOrientationProperties();
      this.forceFullScreen();
      this.expandedView = new android.widget.RelativeLayout(this.context);
      this.expandedView.addView(this.currentWebView);
      this.addCloseRegion(this.expandedView);
      this.setCloseRegionPosition(this.expandedView);
      ((android.app.Activity)this.context).addContentView(this.expandedView, new android.widget.RelativeLayout.LayoutParams(-1, -1));
      this.isExpandingFromDefault = true;
    }

    private void fireReadyEvent()
    {
      MRAIDLog.d("MRAIDView", "fireReadyEvent");
      this.injectJavaScript("mraid.fireReadyEvent();");
    }

    private void fireStateChangeEvent()
    {
      String[] v1;
      MRAIDLog.d("MRAIDView", "fireStateChangeEvent");
      v1 = new String[5];
      v1[0] = "loading";
      v1[1] = "default";
      v1[2] = "expanded";
      v1[3] = "resized";
      v1[4] = "hidden";
      this.injectJavaScript("mraid.fireStateChangeEvent('" + v1[this.state] + "');");
    }

    private void fireViewableChangeEvent()
    {
      MRAIDLog.d("MRAIDView", "fireViewableChangeEvent");
      this.injectJavaScript("mraid.fireViewableChangeEvent(" + this.isViewable + ");");
    }

    private void forceFullScreen()
    {
      boolean v1 = false;
      android.app.Activity v2 = null;
      char flags;
      android.app.ActionBar ActionBar; // RETVAL
      android.app.ActionBar v5;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v1 = true;
            MRAIDLog.d("MRAIDView", "forceFullScreen");
            v2 = (android.app.Activity)this.context;
            flags = (char)v2.getWindow().getAttributes().flags;
            this.isFullScreen = (flags & 0x400) != 0;
            this.isForceNotFullScreen = (flags & 0x800) != 0;
            this.origTitleBarVisibility = -9;
            if ( Build.VERSION.SDK_INT >= 11 )
            {
            ActionBar = v2.getActionBar();
            v5 = ActionBar;
            if ( ActionBar != null )
            {
            this.isActionBarShowing = ActionBar.isShowing();
            v5.hide();
            { _pc = 1; continue _sm; }
            }
            this.titleBar = null;
            try
            {
            this.titleBar = (android.view.View)v2.findViewById(16908310).getParent();
            }
            catch ( NullPointerException e )
            {
            }
            if ( this.titleBar != null )
            {
            this.origTitleBarVisibility = this.titleBar.getVisibility();
            this.titleBar.setVisibility(8);
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            MRAIDLog.d("MRAIDView", "isFullScreen " + this.isFullScreen);
            MRAIDLog.d("MRAIDView", "isForceNotFullScreen " + this.isForceNotFullScreen);
            MRAIDLog.d("MRAIDView", "isActionBarShowing " + this.isActionBarShowing);
            MRAIDLog.d("MRAIDView", "origTitleBarVisibility " + getVisibilityString(this.origTitleBarVisibility));
            v2.getWindow().addFlags(1024);
            v2.getWindow().clearFlags(2048);
            if ( this.isFullScreen )
            v1 = false;
            this.isForcingFullScreen = v1;
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    private static String getOrientationString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case -1:
          v1 = "UNSPECIFIED";
          break;
        case 0:
          v1 = "LANDSCAPE";
          break;
        case 1:
          v1 = "PORTRAIT";
          break;
        default:
          v1 = "UNKNOWN";
          break;
      }
      return v1;
    }

    private String getStringFromFileUrl(String p0)
    {
      StringBuffer v2;
      String[] v3;
      java.io.BufferedReader v4;
      String Line;
      v2 = new StringBuffer("");
      v3 = p0.split("/");
      if ( v3[3].equals("android_asset") )
      {
        try
        {
          v4 = new java.io.BufferedReader(new java.io.InputStreamReader(this.context.getAssets().open(v3[4])));
          Line = v4.readLine();
          v2.append(Line);
          while ( Line != null )
          {
            Line = v4.readLine();
            v2.append(Line);
          }
          v4.close();
        }
        catch ( java.io.IOException v6 )
        {
          MRAIDLog.e("Error fetching file: " + v6.getMessage());
        }
        return v2.toString();
      }
      else
      {
        MRAIDLog.e("Unknown location to fetch file content");
        return "";
      }
    }

    private String getStringFromUrl(String p0)
    {
      java.io.InputStream v2 = null;
      String v4 = null;
      java.net.HttpURLConnection v6 = null;
      int ResponseCode = 0;
      java.io.InputStream InputStream = null; // RETVAL
      java.io.InputStream v9 = null;
      byte[] v10 = null;
      StringBuilder i = null;
      int v12 = 0; // RETVAL
      java.io.IOException v14 = null;
      String v15 = null; // RETVAL
      String v16 = null;
      java.io.InputStream v17 = null;
      String v18 = null;
      java.io.IOException v22 = null;
      java.io.IOException v23 = null;
      java.io.IOException v25 = null;
      java.io.IOException _cv_1 = null;
      java.io.IOException _cv_2 = null;
      java.io.IOException _cv_3 = null;
      Throwable _cv_4 = null;
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
              if ( p0.startsWith("file:///") )
              return this.getStringFromFileUrl(p0);
              _ehCatchPc = 16;
              _ehCatchPc = 13;
              v6 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
              ResponseCode = v6.getResponseCode();
              MRAIDLog.d("MRAIDView", "response code " + ResponseCode);
              if ( !(ResponseCode != 200) ) { _pc = 2; continue _sm; }
              v18 = null;
              _pc = 1;
              continue _sm;
            case 1:
              v6.disconnect();
              if ( v2 == null )
              return v18;
              try
              {
              v2.close();
              return v18;
              }
              catch ( java.io.IOException e )
              {
              return v18;
              }
              


            case 2:
              MRAIDLog.d("MRAIDView", "getContentLength " + v6.getContentLength());
              InputStream = v6.getInputStream();
              v9 = InputStream;
              _ehCatchPc = 9;
              v10 = new byte[1500];
              for ( i = new StringBuilder(); ; i.append(new String(v10, 0, v12)) )
              {
              v12 = v9.read(v10);
              if ( v12 == -1 )
              break;
              }
              v15 = i.toString();
              v16 = v15;
              _ehCatchPc = 3;
              MRAIDLog.d("MRAIDView", "getStringFromUrl ok, length=" + v15.length());
              v17 = v9;
              v18 = v16;
              v2 = v17;
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = 9;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 5; continue _sm; }
              _cv_1 = (java.io.IOException)_ehCaught;
              v22 = _cv_1;
              v4 = v15;
              v2 = v9;
              v23 = v22;
              _pc = 4;
              continue _sm;
            case 4:
              MRAIDLog.e("MRAIDView", "getStringFromUrl failed " + v23.getLocalizedMessage());
              _pc = 8;
              continue _sm;
            case 5:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 7; continue _sm; }
              _pc = 6;
              continue _sm;
            case 6:
              v2 = v9;
              _pc = 17;
              continue _sm;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = 13;
              _pc = 12;
              continue _sm;
            case 9:
              _ehCatchPc = 13;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 10; continue _sm; }
              _cv_2 = (java.io.IOException)_ehCaught;
              v14 = _cv_2;
              v4 = null;
              v2 = InputStream;
              v23 = v14;
              _pc = 4;
              continue _sm;
            case 10:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _pc = 6;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              _ehCatchPc = 16;
              _pc = 15;
              continue _sm;
            case 13:
              _ehCatchPc = 16;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 14; continue _sm; }
              _cv_3 = (java.io.IOException)_ehCaught;
              v23 = _cv_3;
              v4 = null;
              _pc = 4;
              continue _sm;
            case 14:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 15:
              _ehCatchPc = -1;
              _pc = 19;
              continue _sm;
            case 16:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 18; continue _sm; }
              _cv_4 = (Throwable)_ehCaught;
              _pc = 17;
              continue _sm;
            case 17:
              if ( v2 != null )
              {
              try
              {
              v2.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              throw _cv_4;
            case 18:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 19:
              if ( v2 != null )
              {
              try
              {
              v2.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              return v4;
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

    private static String getVisibilityString(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "VISIBLE";
          break;
        case 4:
          v1 = "INVISIBLE";
          break;
        case 8:
          v1 = "GONE";
          break;
        default:
          v1 = "UNKNOWN";
          break;
      }
      return v1;
    }

    private void injectJavaScript(String p0)
    {
      if ( !TextUtils.isEmpty(p0) )
        this.currentWebView.loadUrl("javascript:" + p0);
    }

    private void injectMraidJs(android.webkit.WebView p0)
    {
      if ( TextUtils.isEmpty(this.mraidJs) )
        this.mraidJs = MRAIDResources.MRAID_JS_MINI;
      MRAIDLog.d("MRAIDView", "injectMraidJs ok " + this.mraidJs.length());
      p0.loadUrl("javascript:" + this.mraidJs);
    }

    private void onLayoutWebView(android.webkit.WebView p0, boolean p1, int p2, int p3, int p4, int p5)
    {
      boolean v7;
      StringBuilder v8;
      String v9;
      v7 = p0 == this.currentWebView;
      v8 = new StringBuilder("onLayoutWebView ");
      if ( p0 == this.webView )
        v9 = "1 ";
      else
        v9 = "2 ";
      MRAIDLog.w(
        "MRAIDView",
        v8.append(v9).append(v7).append(" (").append(this.state).append(") ").append(p1).append(" ").append(p2).append(" ").append(p3).append(" ").append(p4).append(" ").append(p5).toString());
      if ( v7 )
      {
        if ( this.isForcingFullScreen )
        {
          MRAIDLog.d("MRAIDView", "onLayoutWebView ignored, isForcingFullScreen");
          this.isForcingFullScreen = false;
        }
        else
        {
          if ( this.state == 0 || this.state == 1 )
          {
            this.calculateScreenSize();
            this.calculateMaxSize();
          }
          if ( !this.isClosing )
          {
            this.calculatePosition(true);
            if ( this.isInterstitial && !this.defaultPosition.equals(this.currentPosition) )
            {
              this.defaultPosition = new android.graphics.Rect(this.currentPosition);
              this.setDefaultPosition();
            }
          }
          if ( this.isExpandingFromDefault )
          {
            this.isExpandingFromDefault = false;
            if ( this.isInterstitial )
            {
              this.state = 1;
              this.isLaidOut = true;
            }
            if ( !this.isExpandingPart2 )
            {
              MRAIDLog.d("MRAIDView", "calling fireStateChangeEvent 1");
              this.fireStateChangeEvent();
            }
            if ( this.isInterstitial )
            {
              this.fireReadyEvent();
              if ( this.isViewable )
                this.fireViewableChangeEvent();
            }
            if ( this.listener != null )
              this.listener.mraidViewExpand(this);
          }
        }
      }
      else
      {
        MRAIDLog.d("MRAIDView", "onLayoutWebView ignored, not current");
      }
    }

    private void open(String p0)
    {
      String v2;
      try
      {
        v2 = URLDecoder.decode(p0, "UTF-8");
        MRAIDLog.d("MRAIDView-JS callback", "open " + v2);
        if ( this.nativeFeatureListener != null )
        {
          if ( v2.startsWith("sms") )
          {
            this.nativeFeatureListener.mraidNativeFeatureSendSms(v2);
          }
          else if ( v2.startsWith("tel") )
          {
            this.nativeFeatureListener.mraidNativeFeatureCallTel(v2);
          }
          else
          {
            this.nativeFeatureListener.mraidNativeFeatureOpenBrowser(v2);
          }
        }
      }
      catch ( java.io.UnsupportedEncodingException v3 )
      {
        v3.printStackTrace();
      }
    }

    private void parseCommandUrl(String p0)
    {
      java.util.Map v2;
      String v3;
      String[] v4;
      String[] v5;
      String[] v6;
      Class[] v7;
      java.lang.reflect.Method DeclaredMethod;
      String v9;
      Object v10; // RETVAL
      Object[] v11;
      Class[] v13;
      Object[] v14;
      MRAIDLog.d("MRAIDView", "parseCommandUrl " + p0);
      v2 = new com.gameloft.glads.mraid.internal.MRAIDParser().parseCommandUrl(p0);
      v3 = (String)v2.get("command");
      v4 = new String[2];
      v4[0] = "close";
      v4[1] = "resize";
      v5 = new String[6];
      v5[0] = "createCalendarEvent";
      v5[1] = "expand";
      v5[2] = "open";
      v5[3] = "playVideo";
      v5[4] = "storePicture";
      v5[5] = "useCustomClose";
      v6 = new String[2];
      v6[0] = "setOrientationProperties";
      v6[1] = "setResizeProperties";
      try
      {
        if ( Arrays.asList(v4).contains(v3) )
        {
          this.getClass().getDeclaredMethod(v3, new Class[0]).invoke(this, new Object[0]);
        }
        else if ( Arrays.asList(v5).contains(v3) )
        {
          v7 = new Class[1];
          v7[0] = String.class;
          DeclaredMethod = this.getClass().getDeclaredMethod(v3, v7);
          if ( v3.equals("createCalendarEvent") )
          {
            v9 = "eventJSON";
          }
          else if ( v3.equals("useCustomClose") )
          {
            v9 = "useCustomClose";
          }
          else
          {
            v9 = "url";
          }
          v10 = v2.get(v9);
          v11 = new Object[1];
          v11[0] = (String)v10;
          DeclaredMethod.invoke(this, v11);
        }
        else if ( Arrays.asList(v6).contains(v3) )
        {
          v13 = new Class[1];
          v13[0] = java.util.Map.class;
          v14 = new Object[1];
          v14[0] = v2;
          this.getClass().getDeclaredMethod(v3, v13).invoke(this, v14);
        }
      }
      catch ( Exception v12 )
      {
        v12.printStackTrace();
      }
    }

    private void pauseWebView(android.webkit.WebView p0)
    {
      MRAIDLog.d("MRAIDView", "pauseWebView " + p0.toString());
      if ( Build.VERSION.SDK_INT < 11 )
        p0.loadUrl("about:blank");
      else
        p0.onPause();
    }

    private void playVideo(String p0)
    {
      String v2;
      try
      {
        v2 = URLDecoder.decode(p0, "UTF-8");
        MRAIDLog.d("MRAIDView-JS callback", "playVideo " + v2);
        if ( this.nativeFeatureListener != null )
          this.nativeFeatureListener.mraidNativeFeaturePlayVideo(v2);
      }
      catch ( java.io.UnsupportedEncodingException v3 )
      {
        v3.printStackTrace();
      }
    }

    private int px2dip(int p0)
    {
      return 160 * p0 / this.displayMetrics.densityDpi;
    }

    private void removeResizeView()
    {
      this.resizedView.removeAllViews();
      ((android.widget.FrameLayout)((android.app.Activity)this.context).findViewById(16908290)).removeView(this.resizedView);
      this.resizedView = null;
      this.closeRegion = null;
    }

    private void resize()
    {
      MRAIDLog.d("MRAIDView-JS callback", "resize");
      if ( this.listener != null
        && this.listener.mraidViewResize(this, this.resizeProperties.width, this.resizeProperties.height, this.resizeProperties.offsetX, this.resizeProperties.offsetY) )
      {
        this.state = 3;
        if ( this.resizedView == null )
        {
          this.resizedView = new android.widget.RelativeLayout(this.context);
          this.removeAllViews();
          this.resizedView.addView(this.webView);
          this.addCloseRegion(this.resizedView);
          ((android.widget.FrameLayout)this.getRootView().findViewById(16908290)).addView(this.resizedView);
        }
        this.setCloseRegionPosition(this.resizedView);
        this.setResizedViewSize();
        this.setResizedViewPosition();
        this.handler.post((Runnable)new com.gameloft.glads.mraid.MRAIDView$6(this));
      }
    }

    private void restoreOriginalOrientation()
    {
      android.app.Activity v1;
      MRAIDLog.d("MRAIDView", "restoreOriginalOrientation");
      v1 = (android.app.Activity)this.context;
      if ( v1.getRequestedOrientation() != this.originalRequestedOrientation )
        v1.setRequestedOrientation(this.originalRequestedOrientation);
    }

    private void restoreOriginalScreenState()
    {
      android.app.Activity v1;
      v1 = (android.app.Activity)this.context;
      if ( !this.isFullScreen )
        v1.getWindow().clearFlags(1024);
      if ( this.isForceNotFullScreen )
        v1.getWindow().addFlags(2048);
      if ( Build.VERSION.SDK_INT >= 11 )
      {
        if ( this.isActionBarShowing )
        {
          v1.getActionBar().show();
        }
        else if ( this.titleBar != null )
        {
          this.titleBar.setVisibility(this.origTitleBarVisibility);
        }
      }
    }

    private void setCloseRegionPosition(android.view.View p0)
    {
      float v2; // RETVAL
      android.widget.RelativeLayout.LayoutParams v3;
      v2 = TypedValue.applyDimension(1, 50.0f, this.displayMetrics);
      v3 = new android.widget.RelativeLayout.LayoutParams((int)v2, (int)v2);
      if ( p0 == this.expandedView )
      {
        v3.addRule(10);
        v3.addRule(11);
      }
      else if ( p0 == this.resizedView )
      {
        switch ( this.resizeProperties.customClosePosition )
        {
          case 0:
          case 4:
            v3.addRule(9);
            break;
          case 1:
          case 3:
          case 5:
            v3.addRule(14);
            break;
          case 2:
          case 6:
            v3.addRule(11);
            break;
          default:
            break;
        }
        switch ( this.resizeProperties.customClosePosition )
        {
          case 0:
          case 1:
          case 2:
            v3.addRule(10);
            break;
          case 3:
            v3.addRule(15);
            break;
          case 4:
          case 5:
          case 6:
            v3.addRule(12);
            break;
          default:
            break;
        }
      }
      this.closeRegion.setLayoutParams(v3);
    }

    private void setCurrentPosition()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      v1 = this.currentPosition.left;
      v2 = this.currentPosition.top;
      v3 = this.currentPosition.width();
      v4 = this.currentPosition.height();
      MRAIDLog.d("MRAIDView", "setCurrentPosition [" + v1 + "," + v2 + "] (" + v3 + "x" + v4 + ")");
      this.injectJavaScript("mraid.setCurrentPosition("
                          + this.px2dip(v1)
                          + ","
                          + this.px2dip(v2)
                          + ","
                          + this.px2dip(v3)
                          + ","
                          + this.px2dip(v4)
                          + ");");
    }

    private void setDefaultPosition()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      v1 = this.defaultPosition.left;
      v2 = this.defaultPosition.top;
      v3 = this.defaultPosition.width();
      v4 = this.defaultPosition.height();
      MRAIDLog.d("MRAIDView", "setDefaultPosition [" + v1 + "," + v2 + "] (" + v3 + "x" + v4 + ")");
      this.injectJavaScript("mraid.setDefaultPosition("
                          + this.px2dip(v1)
                          + ","
                          + this.px2dip(v2)
                          + ","
                          + this.px2dip(v3)
                          + ","
                          + this.px2dip(v4)
                          + ");");
    }

    private void setMaxSize()
    {
      int width;
      int height;
      MRAIDLog.d("MRAIDView", "setMaxSize");
      width = this.maxSize.width;
      height = this.maxSize.height;
      MRAIDLog.d("MRAIDView", "setMaxSize " + width + "x" + height);
      this.injectJavaScript("mraid.setMaxSize(" + this.px2dip(width) + "," + this.px2dip(height) + ");");
    }

    private void setOrientationProperties(java.util.Map<String, String> p0)
    {
      boolean v2;
      String v3;
      v2 = Boolean.parseBoolean((String)p0.get("allowOrientationChange"));
      v3 = (String)p0.get("forceOrientation");
      MRAIDLog.d("MRAIDView-JS callback", "setOrientationProperties " + v2 + " " + v3);
      if ( this.orientationProperties.allowOrientationChange != v2
        || this.orientationProperties.forceOrientation != MRAIDOrientationProperties.forceOrientationFromString(v3) )
      {
        this.orientationProperties.allowOrientationChange = v2;
        this.orientationProperties.forceOrientation = MRAIDOrientationProperties.forceOrientationFromString(v3);
        if ( this.isInterstitial || this.state == 2 )
          this.applyOrientationProperties();
      }
    }

    private void setResizeProperties(java.util.Map<String, String> p0)
    {
      int v2;
      int v3;
      int v4;
      int v5;
      String v6;
      boolean v7;
      v2 = Integer.parseInt((String)p0.get("width"));
      v3 = Integer.parseInt((String)p0.get("height"));
      v4 = Integer.parseInt((String)p0.get("offsetX"));
      v5 = Integer.parseInt((String)p0.get("offsetY"));
      v6 = (String)p0.get("customClosePosition");
      v7 = Boolean.parseBoolean((String)p0.get("allowOffscreen"));
      MRAIDLog.d(
        "MRAIDView-JS callback",
        "setResizeProperties " + v2 + " " + v3 + " " + v4 + " " + v5 + " " + v6 + " " + v7);
      this.resizeProperties.width = v2;
      this.resizeProperties.height = v3;
      this.resizeProperties.offsetX = v4;
      this.resizeProperties.offsetY = v5;
      this.resizeProperties.customClosePosition = MRAIDResizeProperties.customClosePositionFromString(v6);
      this.resizeProperties.allowOffscreen = v7;
    }

    private void setResizedViewPosition()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      android.widget.FrameLayout.LayoutParams v5;
      MRAIDLog.d("MRAIDView", "setResizedViewPosition");
      if ( this.resizedView != null )
      {
        v1 = (int)TypedValue.applyDimension(1, (float)this.resizeProperties.width, this.displayMetrics);
        v2 = (int)TypedValue.applyDimension(1, (float)this.resizeProperties.height, this.displayMetrics);
        v3 = this.defaultPosition.left
           + (int)TypedValue.applyDimension(1, (float)this.resizeProperties.offsetX, this.displayMetrics);
        v4 = (int)TypedValue.applyDimension(1, (float)this.resizeProperties.offsetY, this.displayMetrics)
           + this.defaultPosition.top;
        v5 = (android.widget.FrameLayout.LayoutParams)this.resizedView.getLayoutParams();
        v5.leftMargin = v3;
        v5.topMargin = v4;
        this.resizedView.setLayoutParams(v5);
        if ( v3 != this.currentPosition.left
          || v4 != this.currentPosition.top
          || v1 != this.currentPosition.width()
          || v2 != this.currentPosition.height() )
        {
          this.currentPosition.left = v3;
          this.currentPosition.top = v4;
          this.currentPosition.right = v3 + v1;
          this.currentPosition.bottom = v2 + v4;
          this.setCurrentPosition();
        }
      }
    }

    private void setResizedViewSize()
    {
      MRAIDLog.d("MRAIDView", "setResizedViewSize");
      this.resizedView.setLayoutParams(new android.widget.FrameLayout.LayoutParams((int)TypedValue.applyDimension(
                                                                                          1,
                                                                                          (float)this.resizeProperties.width,
                                                                                          this.displayMetrics), (int)TypedValue.applyDimension(1, (float)this.resizeProperties.height, this.displayMetrics)));
    }

    private void setScreenSize()
    {
      int width;
      int height;
      MRAIDLog.d("MRAIDView", "setScreenSize");
      width = this.screenSize.width;
      height = this.screenSize.height;
      MRAIDLog.d("MRAIDView", "setScreenSize " + width + "x" + height);
      this.injectJavaScript("mraid.setScreenSize(" + this.px2dip(width) + "," + this.px2dip(height) + ");");
    }

    private void setSupportedServices()
    {
      MRAIDLog.d("MRAIDView", "setSupportedServices");
      this.injectJavaScript("mraid.setSupports(mraid.SUPPORTED_FEATURES.CALENDAR, "
                          + this.nativeFeatureManager.isCalendarSupported()
                          + ");");
      this.injectJavaScript("mraid.setSupports(mraid.SUPPORTED_FEATURES.INLINEVIDEO, "
                          + this.nativeFeatureManager.isInlineVideoSupported()
                          + ");");
      this.injectJavaScript("mraid.setSupports(mraid.SUPPORTED_FEATURES.SMS, "
                          + this.nativeFeatureManager.isSmsSupported()
                          + ");");
      this.injectJavaScript("mraid.setSupports(mraid.SUPPORTED_FEATURES.STOREPICTURE, "
                          + this.nativeFeatureManager.isStorePictureSupported()
                          + ");");
      this.injectJavaScript("mraid.setSupports(mraid.SUPPORTED_FEATURES.TEL, "
                          + this.nativeFeatureManager.isTelSupported()
                          + ");");
    }

    private void setViewable(int p0)
    {
      boolean v2;
      v2 = p0 == 0;
      if ( v2 != this.isViewable )
      {
        this.isViewable = v2;
        if ( this.isPageFinished && this.isLaidOut )
        {
          this.fireViewableChangeEvent();
          this.listener.mraidViewVisibilityChanged(p0);
        }
      }
    }

    private void storePicture(String p0)
    {
      String v2;
      try
      {
        v2 = URLDecoder.decode(p0, "UTF-8");
        MRAIDLog.d("MRAIDView-JS callback", "storePicture " + v2);
        if ( this.nativeFeatureListener != null )
          this.nativeFeatureListener.mraidNativeFeatureStorePicture(v2);
      }
      catch ( java.io.UnsupportedEncodingException v3 )
      {
        v3.printStackTrace();
      }
    }

    private void useCustomClose(String p0)
    {
      MRAIDLog.d("MRAIDView-JS callback", "useCustomClose " + p0);
      this.useCustomClose = Boolean.parseBoolean(p0);
    }

    public void closeFromExpanded()
    {
      if ( this.state == 1 && this.isInterstitial )
      {
        this.state = 4;
        this.pauseWebView(this.currentWebView);
      }
      else if ( this.state == 2 || this.state == 3 )
      {
        this.state = 1;
      }
      this.isClosing = true;
      if ( this.expandedView != null )
      {
        this.expandedView.removeAllViews();
        ((android.widget.FrameLayout)((android.app.Activity)this.context).findViewById(16908290)).removeView(this.expandedView);
        this.expandedView = null;
        this.closeRegion = null;
        this.restoreOriginalOrientation();
        this.restoreOriginalScreenState();
        if ( this.webViewPart2 != null )
        {
          this.webViewPart2.setWebChromeClient(null);
          this.webViewPart2.setWebViewClient(null);
          this.webViewPart2 = null;
          this.webView.setWebChromeClient(this.mraidWebChromeClient);
          this.webView.setWebViewClient(this.mraidWebViewClient);
          this.currentWebView = this.webView;
        }
        else
        {
          this.addView(this.webView);
        }
        this.handler.post((Runnable)new com.gameloft.glads.mraid.MRAIDView$7(this));
      }
    }

    public com.gameloft.glads.mraid.MRAIDView$TrackingData getMRAIDTrackingData()
    {
      return this.mMRAIDTrackingData;
    }

    protected void onAttachedToWindow()
    {
      MRAIDLog.d("MRAIDView", "onAttachedToWindow");
      super.onAttachedToWindow();
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      StringBuilder v2;
      String v3;
      super.onConfigurationChanged(p0);
      v2 = new StringBuilder("onConfigurationChanged ");
      if ( p0.orientation == 1 )
        v3 = "portrait";
      else
        v3 = "landscape";
      MRAIDLog.d("MRAIDView", v2.append(v3).toString());
      ((android.app.Activity)this.context).getWindowManager().getDefaultDisplay().getMetrics(this.displayMetrics);
    }

    protected void onDetachedFromWindow()
    {
      MRAIDLog.d("MRAIDView", "onDetachedFromWindow");
      super.onDetachedFromWindow();
    }

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      super.onLayout(p0, p1, p2, p3, p4);
      MRAIDLog.w("MRAIDView", "onLayout (" + this.state + ") " + p0 + " " + p1 + " " + p2 + " " + p3 + " " + p4);
      if ( this.isForcingFullScreen )
      {
        MRAIDLog.d("MRAIDView", "onLayout ignored");
      }
      else
      {
        if ( this.state == 2 || this.state == 3 )
        {
          this.calculateScreenSize();
          this.calculateMaxSize();
        }
        if ( this.isClosing )
        {
          this.isClosing = false;
          this.currentPosition = new android.graphics.Rect(this.defaultPosition);
          this.setCurrentPosition();
        }
        else
        {
          this.calculatePosition(false);
        }
        if ( this.state == 3 && p0 )
          this.handler.post((Runnable)new com.gameloft.glads.mraid.MRAIDView$10(this));
        this.isLaidOut = true;
        if ( this.state == 0 && this.isPageFinished )
        {
          this.state = 1;
          this.fireStateChangeEvent();
          this.fireReadyEvent();
          if ( this.isViewable )
            this.fireViewableChangeEvent();
        }
      }
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      if ( this.gestureDetector.onTouchEvent(p0) )
        p0.setAction(3);
      return super.onTouchEvent(p0);
    }

    protected void onVisibilityChanged(android.view.View p0, int p1)
    {
      super.onVisibilityChanged(p0, p1);
      MRAIDLog.d("MRAIDView", "onVisibilityChanged " + getVisibilityString(p1));
      this.setViewable(p1);
    }

    protected void onWindowVisibilityChanged(int p0)
    {
      int Visibility;
      super.onWindowVisibilityChanged(p0);
      Visibility = this.getVisibility();
      MRAIDLog.d(
        "MRAIDView",
        "onWindowVisibilityChanged " + getVisibilityString(p0) + " (actual " + getVisibilityString(Visibility) + ")");
      this.setViewable(Visibility);
    }

    public void sendCloseCommand()
    {
      if ( this.currentWebView != null )
        this.currentWebView.loadUrl("javascript:mraid.close();");
    }

    protected void showAsInterstitial()
    {
      this.expand(null);
    }

}
