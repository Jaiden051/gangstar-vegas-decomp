// Decompiled from classes.dex (SourceFile: VASTActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.activity;

import android.net.Uri;
import android.os.Build;
import android.widget.ImageView;
import com.gameloft.glads.GLAds;
import com.gameloft.glads.VASTFullScreen;
import com.gameloft.glads.vast.VASTPlayer;
import com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE;
import com.gameloft.glads.vast.util.Assets;
import com.gameloft.glads.vast.util.HttpTools;
import com.gameloft.glads.vast.util.VASTLog;
public class VASTActivity extends android.app.Activity implements android.media.MediaPlayer.OnCompletionListener, android.media.MediaPlayer.OnErrorListener, android.media.MediaPlayer.OnPreparedListener, android.media.MediaPlayer.OnVideoSizeChangedListener, android.view.SurfaceHolder.Callback {
    // Fields
    private static long QUARTILE_TIMER_INTERVAL;
    private static double SKIP_INFO_SCALE;
    private static java.lang.String TAG;
    private static long TOOLBAR_HIDE_DELAY;
    private static long VIDEO_PROGRESS_TIMER_INTERVAL;
    private static boolean wasPaused;
    private android.widget.RelativeLayout mButtonPanel;
    private android.widget.ImageButton mCloseButton;
    private com.gameloft.glads.vast.activity.VASTActivity$TextViewOutline mCountDownLabel;
    private int mCurrentVideoPosition;
    private android.os.Handler mHandler;
    private android.widget.ImageButton mInfoButton;
    private android.widget.RelativeLayout mInfoPanel;
    private boolean mIsButtonPanelVisible;
    private boolean mIsCompleted;
    private boolean mIsPlayBackError;
    private boolean mIsProcessedImpressions;
    private boolean mIsVideoPaused;
    private final int mMaxProgressTrackingPoints;
    private android.media.MediaPlayer mMediaPlayer;
    private android.widget.RelativeLayout mOverlay;
    private android.graphics.drawable.Drawable mPauseDrawable;
    private android.graphics.drawable.Drawable mPlayDrawable;
    private android.widget.ImageButton mPlayPauseButton;
    private android.widget.ProgressBar mProgressBar;
    private int mQuartile;
    private android.widget.RelativeLayout mRootLayout;
    private int mScreenHeight;
    private int mScreenWidth;
    private java.util.Timer mStartVideoProgressTimer;
    private android.view.SurfaceHolder mSurfaceHolder;
    private android.view.SurfaceView mSurfaceView;
    private java.util.Timer mToolBarTimer;
    private java.util.HashMap mTrackingEventMap;
    private java.util.Timer mTrackingEventTimer;
    private com.gameloft.glads.vast.model.VASTModel mVastModel;
    private int mVideoHeight;
    private java.util.LinkedList mVideoProgressTracker;
    private int mVideoWidth;

    // Methods
    static
    {
      TAG = "GLAds VAST";
      wasPaused = false;
    }

    public VASTActivity()
    {
      super();
      this.mVideoProgressTracker = null;
      this.mMaxProgressTrackingPoints = 20;
      this.mVastModel = null;
      this.mIsButtonPanelVisible = false;
      this.mIsVideoPaused = false;
      this.mIsPlayBackError = false;
      this.mIsProcessedImpressions = false;
      this.mIsCompleted = false;
      this.mQuartile = 0;
    }

    private String GetTimeLeftString()
    {
      int v3;
      int v4;
      String v5; // RETVAL
      String v6;
      if ( this.mMediaPlayer == null )
        return ":00";
      v3 = (this.mMediaPlayer.getDuration() - this.mMediaPlayer.getCurrentPosition()) / 1000;
      if ( v3 < 10 )
        return ":0" + v3;
      if ( v3 < 60 )
        return ":" + v3;
      v4 = v3 % 60;
      v5 = v3 / 60 + ":";
      v6 = v5;
      if ( v4 < 10 )
        v6 = v5 + "0";
      return v6 + v4;
    }

    /* synthetic */ static boolean access$002(boolean p0)
    {
      wasPaused = p0;
      return p0;
    }

    /* synthetic */ static void access$100(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.startToolBarTimer();
    }

    /* synthetic */ static android.media.MediaPlayer access$1000(
            com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mMediaPlayer;
    }

    /* synthetic */ static int access$1100(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mQuartile;
    }

    /* synthetic */ static int access$1108(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      int mQuartile;
      mQuartile = p0.mQuartile;
      p0.mQuartile = mQuartile + 1;
      return mQuartile;
    }

    /* synthetic */ static void access$1200(
            com.gameloft.glads.vast.activity.VASTActivity p0,
            com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE p1)
    {
      p0.processEvent(p1);
    }

    /* synthetic */ static void access$1300(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.stopQuartileTimer();
    }

    /* synthetic */ static String access$1400(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.GetTimeLeftString();
    }

    /* synthetic */ static com.gameloft.glads.vast.activity.VASTActivity$TextViewOutline access$1500(
            com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mCountDownLabel;
    }

    /* synthetic */ static java.util.LinkedList access$1600(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mVideoProgressTracker;
    }

    /* synthetic */ static boolean access$1702(com.gameloft.glads.vast.activity.VASTActivity p0, boolean p1)
    {
      p0.mIsPlayBackError = p1;
      return p1;
    }

    /* synthetic */ static void access$1800(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.stopVideoProgressTimer();
    }

    /* synthetic */ static void access$1900(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.processErrorEvent();
    }

    /* synthetic */ static void access$200(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.infoClicked();
    }

    /* synthetic */ static void access$300(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.closeClicked();
    }

    /* synthetic */ static void access$500(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      p0.playPauseButtonClicked();
    }

    /* synthetic */ static String access$600()
    {
      return TAG;
    }

    /* synthetic */ static android.widget.RelativeLayout access$700(
            com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mButtonPanel;
    }

    /* synthetic */ static boolean access$802(com.gameloft.glads.vast.activity.VASTActivity p0, boolean p1)
    {
      p0.mIsButtonPanelVisible = p1;
      return p1;
    }

    /* synthetic */ static android.os.Handler access$900(com.gameloft.glads.vast.activity.VASTActivity p0)
    {
      return p0.mHandler;
    }

    private void activateButtons(boolean p0)
    {
      VASTLog.d(TAG, "entered activateButtons:");
      if ( p0 )
        this.mButtonPanel.setVisibility(0);
      else
        this.mButtonPanel.setVisibility(8);
    }

    private void calculateAspectRatio()
    {
      double v1;
      double v2;
      double v3; // RETVAL
      int v4;
      int v5;
      android.widget.RelativeLayout.LayoutParams v6;
      VASTLog.d(TAG, "entered calculateAspectRatio");
      if ( this.mVideoWidth != 0 && this.mVideoHeight != 0 )
      {
        VASTLog.d(TAG, "calculating aspect ratio");
        v1 = (double)this.mScreenWidth * 1.0 / (double)this.mVideoWidth;
        v2 = (double)this.mScreenHeight * 1.0 / (double)this.mVideoHeight;
        v3 = Math.min(v1, v2);
        v4 = (int)((double)this.mVideoWidth * v3);
        v5 = (int)(v3 * (double)this.mVideoHeight);
        v6 = new android.widget.RelativeLayout.LayoutParams(v4, v5);
        v6.addRule(13);
        this.mSurfaceView.setLayoutParams(v6);
        this.mSurfaceHolder.setFixedSize(v4, v5);
        VASTLog.d(TAG, " screen size: " + this.mScreenWidth + "x" + this.mScreenHeight);
        VASTLog.d(TAG, " video size:  " + this.mVideoWidth + "x" + this.mVideoHeight);
        VASTLog.d(TAG, " widthRatio:   " + v1);
        VASTLog.d(TAG, " heightRatio:   " + v2);
        VASTLog.d(TAG, "surface size: " + v4 + "x" + v5);
      }
      else
      {
        VASTLog.w(TAG, "mVideoWidth or mVideoHeight is 0, skipping calculateAspectRatio");
      }
    }

    private void cleanActivityUp()
    {
      this.stopQuartileTimer();
      this.stopVideoProgressTimer();
      this.stopToolBarTimer();
      this.cleanUpMediaPlayer();
    }

    private void cleanUpMediaPlayer()
    {
      VASTLog.d(TAG, "entered cleanUpMediaPlayer ");
      if ( this.mMediaPlayer != null )
      {
        if ( this.mMediaPlayer.isPlaying() )
          this.mMediaPlayer.stop();
        this.mMediaPlayer.setOnCompletionListener(null);
        this.mMediaPlayer.setOnErrorListener(null);
        this.mMediaPlayer.setOnPreparedListener(null);
        this.mMediaPlayer.setOnVideoSizeChangedListener(null);
        this.mMediaPlayer.release();
        this.mMediaPlayer = null;
      }
    }

    private void closeClicked()
    {
      VASTLog.d(TAG, "entered closeClicked()");
      this.cleanActivityUp();
      if ( !this.mIsPlayBackError )
        this.processEvent(TRACKING_EVENTS_TYPE.close);
      if ( VASTPlayer.listener != null )
        VASTPlayer.listener.vastClosed();
      this.finish();
      VASTLog.d(TAG, "leaving closeClicked()");
    }

    private void createButtonPanel(int p0, int p1)
    {
      android.widget.RelativeLayout.LayoutParams v3;
      v3 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
      v3.addRule(12);
      this.mButtonPanel = new android.widget.RelativeLayout(this);
      this.mButtonPanel.setLayoutParams(v3);
      this.mButtonPanel.setPadding(0, 0, 0, 0);
      this.mButtonPanel.setBackgroundColor(0);
      this.mButtonPanel.setVisibility(8);
      this.mOverlay.addView(this.mButtonPanel);
    }

    private void createCloseButton(int p0)
    {
      android.widget.RelativeLayout.LayoutParams v2;
      v2 = new android.widget.RelativeLayout.LayoutParams(p0, p0);
      v2.addRule(11);
      this.mCloseButton = new android.widget.ImageButton(this);
      this.mCloseButton.setImageDrawable(Assets.getDrawableFromBase64(this.getResources(), Assets.exit));
      this.mCloseButton.setLayoutParams(v2);
      this.mCloseButton.setScaleType(ImageView.ScaleType.CENTER_CROP);
      this.mCloseButton.setPadding(0, 0, 0, 0);
      this.mCloseButton.setBackgroundColor(0);
      this.mCloseButton.setVisibility(0);
      this.mCloseButton.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.glads.vast.activity.VASTActivity$4(this));
      this.mButtonPanel.addView(this.mCloseButton);
    }

    private void createCountDownLabel(int p0)
    {
      android.widget.RelativeLayout.LayoutParams v2;
      v2 = new android.widget.RelativeLayout.LayoutParams(p0, p0);
      v2.addRule(12);
      v2.addRule(9);
      v2.width = 300;
      this.mCountDownLabel = new com.gameloft.glads.vast.activity.VASTActivity$TextViewOutline(this, this);
      VASTActivity$TextViewOutline.access$400(this.mCountDownLabel);
      if ( Build.VERSION.SDK_INT >= 11 )
        this.mCountDownLabel.setTextIsSelectable(false);
      this.mCountDownLabel.setLayoutParams(v2);
      this.mCountDownLabel.setPadding(25, 0, 0, 0);
      this.mCountDownLabel.setTextColor(-1);
      this.mCountDownLabel.setBackgroundColor(0);
      this.mCountDownLabel.setVisibility(0);
      this.mCountDownLabel.setText("");
      this.mInfoPanel.addView(this.mCountDownLabel);
    }

    private void createInfoButton(int p0)
    {
      String ClickThrough; // RETVAL
      android.widget.RelativeLayout.LayoutParams v3;
      ClickThrough = this.mVastModel.getVideoClicks().getClickThrough();
      if ( ClickThrough != null && ClickThrough.length() > 0 )
      {
        v3 = new android.widget.RelativeLayout.LayoutParams(p0, p0);
        v3.addRule(11);
        v3.addRule(12);
        this.mInfoButton = new android.widget.ImageButton(this);
        this.mInfoButton.setImageDrawable(Assets.getDrawableFromBase64(this.getResources(), Assets.info));
        this.mInfoButton.setLayoutParams(v3);
        this.mInfoButton.setScaleType(ImageView.ScaleType.CENTER_CROP);
        this.mInfoButton.setPadding(0, 0, 0, 0);
        this.mInfoButton.setBackgroundColor(0);
        this.mInfoButton.setEnabled(true);
        this.mInfoButton.setVisibility(0);
        this.mInfoButton.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.glads.vast.activity.VASTActivity$3(this));
        this.mInfoPanel.addView(this.mInfoButton);
      }
    }

    private void createInfoPanel(int p0, int p1)
    {
      android.widget.RelativeLayout.LayoutParams v3;
      v3 = new android.widget.RelativeLayout.LayoutParams(-1, 300);
      v3.addRule(12);
      this.mInfoPanel = new android.widget.RelativeLayout(this);
      this.mInfoPanel.setLayoutParams(v3);
      this.mInfoPanel.setPadding(0, 0, 0, 0);
      this.mInfoPanel.setBackgroundColor(0);
      this.mInfoPanel.setVisibility(8);
      this.mOverlay.addView(this.mInfoPanel);
    }

    private void createMediaPlayer()
    {
      this.mMediaPlayer = new android.media.MediaPlayer();
      this.mMediaPlayer.setOnCompletionListener(this);
      this.mMediaPlayer.setOnErrorListener(this);
      this.mMediaPlayer.setOnPreparedListener(this);
      this.mMediaPlayer.setOnVideoSizeChangedListener(this);
      this.mMediaPlayer.setAudioStreamType(3);
    }

    private void createOverlay(android.widget.RelativeLayout.LayoutParams p0)
    {
      this.mOverlay = new android.widget.RelativeLayout(this);
      this.mOverlay.setLayoutParams(p0);
      this.mOverlay.setPadding(0, 0, 0, 0);
      this.mOverlay.setBackgroundColor(0);
      this.mOverlay.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.glads.vast.activity.VASTActivity$2(this));
      this.mRootLayout.addView(this.mOverlay);
    }

    private void createPlayPauseButton(int p0)
    {
      android.widget.RelativeLayout.LayoutParams v2;
      v2 = new android.widget.RelativeLayout.LayoutParams(p0, p0);
      v2.addRule(13);
      this.mPauseDrawable = Assets.getDrawableFromBase64(this.getResources(), Assets.pause);
      this.mPlayDrawable = Assets.getDrawableFromBase64(this.getResources(), Assets.play);
      this.mPlayPauseButton = new android.widget.ImageButton(this);
      this.mPlayPauseButton.setImageDrawable(this.mPauseDrawable);
      this.mPlayPauseButton.setLayoutParams(v2);
      this.mPlayPauseButton.setScaleType(ImageView.ScaleType.CENTER_CROP);
      this.mPlayPauseButton.setPadding(0, 0, 0, 0);
      this.mPlayPauseButton.setBackgroundColor(0);
      this.mPlayPauseButton.setEnabled(true);
      this.mPlayPauseButton.setVisibility(0);
      this.mPlayPauseButton.setOnClickListener((android.view.View.OnClickListener)new com.gameloft.glads.vast.activity.VASTActivity$5(this));
      this.mButtonPanel.addView(this.mPlayPauseButton);
    }

    private void createProgressBar()
    {
      android.widget.RelativeLayout.LayoutParams v1;
      v1 = new android.widget.RelativeLayout.LayoutParams(-1, -2);
      v1.addRule(13);
      this.mProgressBar = new android.widget.ProgressBar(this);
      this.mProgressBar.setLayoutParams(v1);
      this.mRootLayout.addView(this.mProgressBar);
      this.mProgressBar.setVisibility(8);
    }

    private void createRootLayout(android.widget.RelativeLayout.LayoutParams p0)
    {
      this.mRootLayout = new android.widget.RelativeLayout(this);
      this.mRootLayout.setLayoutParams(p0);
      this.mRootLayout.setPadding(0, 0, 0, 0);
      this.mRootLayout.setBackgroundColor(-16777216);
    }

    private void createSurface(android.widget.RelativeLayout.LayoutParams p0)
    {
      this.mSurfaceView = new android.view.SurfaceView(this);
      this.mSurfaceView.setLayoutParams(p0);
      this.mSurfaceHolder = this.mSurfaceView.getHolder();
      this.mSurfaceHolder.addCallback(this);
      this.mSurfaceHolder.setType(3);
      this.mRootLayout.addView(this.mSurfaceView);
    }

    private void createUIComponents()
    {
      android.widget.RelativeLayout.LayoutParams v1;
      int v2;
      v1 = new android.widget.RelativeLayout.LayoutParams(-1, -1);
      this.createRootLayout(v1);
      this.createSurface(v1);
      this.createMediaPlayer();
      this.createOverlay(v1);
      this.createButtonPanel(this.mScreenWidth, this.mScreenHeight);
      this.createInfoPanel(this.mScreenWidth, this.mScreenHeight);
      v2 = (int)((double)Math.min(this.mScreenWidth, this.mScreenHeight) * 0.15);
      this.createPlayPauseButton(v2);
      this.createCloseButton(v2);
      this.createInfoButton(v2);
      this.createCountDownLabel(v2);
      this.setContentView(this.mRootLayout);
      this.createProgressBar();
    }

    private void fireUrls(java.util.List<String> p0)
    {
      java.util.Iterator v2;
      String v3;
      VASTLog.d(TAG, "entered fireUrls");
      if ( p0 != null )
      {
        v2 = p0.iterator();
        while ( v2.hasNext() )
        {
          v3 = (String)v2.next();
          VASTLog.v(TAG, "\tfiring url:" + v3);
          HttpTools.httpGetURL(v3);
        }
      }
      else
      {
        VASTLog.d(TAG, "\turl list is null");
      }
    }

    private void hideProgressBar()
    {
      this.mProgressBar.setVisibility(8);
    }

    private void hideTitleStatusBars()
    {
      this.requestWindowFeature(1);
      this.getWindow().setFlags(1024, 1024);
    }

    private void infoClicked()
    {
      VASTLog.d(TAG, "entered infoClicked:");
      try
      {
        this.activateButtons(false);
        if ( this.mMediaPlayer.isPlaying() )
        {
          this.mMediaPlayer.pause();
          this.mCurrentVideoPosition = this.mMediaPlayer.getCurrentPosition();
        }
        this.processClickThroughEvent();
      }
      catch ( Exception e )
      {
        this.closeClicked();
      }
    }

    private void overlayClicked()
    {
      this.startToolBarTimer();
    }

    private void playPauseButtonClicked()
    {
      boolean isPlaying;
      VASTLog.d(TAG, "entered playPauseClicked");
      if ( this.mMediaPlayer != null )
      {
        isPlaying = this.mMediaPlayer.isPlaying();
        VASTLog.d(TAG, "isPlaying:" + isPlaying);
        if ( isPlaying )
        {
          this.processPauseSteps();
        }
        else if ( this.mIsVideoPaused )
        {
          this.processPlaySteps();
          if ( !this.mIsCompleted )
            this.processEvent(TRACKING_EVENTS_TYPE.resume);
        }
        else
        {
          this.processPlaySteps();
          this.mQuartile = 0;
          this.startQuartileTimer();
        }
      }
      else
      {
        VASTLog.e(TAG, "mMediaPlayer is null when playPauseButton was clicked");
      }
    }

    private void processClickThroughEvent()
    {
      String ClickThrough;
      VASTLog.d(TAG, "entered processClickThroughEvent:");
      ClickThrough = this.mVastModel.getVideoClicks().getClickThrough();
      VASTLog.d(TAG, "clickThrough url: " + ClickThrough);
      VASTFullScreen.sendClickEvent();
      this.fireUrls(this.mVastModel.getVideoClicks().getClickTracking());
      try
      {
        this.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(ClickThrough)));
      }
      catch ( NullPointerException v2 )
      {
        VASTLog.e(TAG, v2.getMessage(), v2);
      }
    }

    private void processErrorEvent()
    {
      VASTLog.d(TAG, "entered processErrorEvent");
      this.fireUrls(this.mVastModel.getErrorUrl());
    }

    private void processEvent(com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE p0)
    {
      try
      {
        VASTLog.i(TAG, "entered Processing Event: " + p0);
        this.fireUrls((java.util.List)this.mTrackingEventMap.get(p0));
      }
      catch ( Exception e )
      {
      }
      VASTFullScreen.handleGLOTTracking(p0);
    }

    private void processImpressions()
    {
      VASTLog.d(TAG, "entered processImpressions");
      this.mIsProcessedImpressions = true;
      this.fireUrls(this.mVastModel.getImpressions());
    }

    private void processPauseSteps()
    {
      this.mIsVideoPaused = true;
      this.mMediaPlayer.pause();
      this.stopVideoProgressTimer();
      this.stopToolBarTimer();
      this.mPlayPauseButton.setImageDrawable(this.mPlayDrawable);
      if ( !this.mIsCompleted )
        this.processEvent(TRACKING_EVENTS_TYPE.pause);
    }

    private void processPlaySteps()
    {
      this.mIsVideoPaused = false;
      this.mMediaPlayer.start();
      this.mPlayPauseButton.setImageDrawable(this.mPauseDrawable);
      this.startToolBarTimer();
      this.startVideoProgressTimer();
    }

    private void showProgressBar()
    {
      this.mProgressBar.setVisibility(0);
    }

    private void startQuartileTimer()
    {
      VASTLog.d(TAG, "entered startQuartileTimer");
      this.stopQuartileTimer();
      if ( this.mIsCompleted )
      {
        VASTLog.d(TAG, "ending quartileTimer becuase the video has been replayed");
      }
      else
      {
        this.mTrackingEventTimer = new java.util.Timer();
        this.mTrackingEventTimer.scheduleAtFixedRate(new com.gameloft.glads.vast.activity.VASTActivity$7(this, this.mMediaPlayer.getDuration()), 0, 250);
      }
    }

    private void startToolBarTimer()
    {
      VASTLog.d(TAG, "entered startToolBarTimer");
      if ( this.mMediaPlayer != null && this.mMediaPlayer.isPlaying() )
      {
        this.stopToolBarTimer();
        this.mToolBarTimer = new java.util.Timer();
        this.mToolBarTimer.schedule(new com.gameloft.glads.vast.activity.VASTActivity$6(this), 3000);
        this.mButtonPanel.setVisibility(0);
        this.mInfoPanel.setVisibility(0);
        this.mIsButtonPanelVisible = true;
      }
      if ( this.mIsVideoPaused )
        this.activateButtons(true);
    }

    private void startVideoProgressTimer()
    {
      VASTLog.d(TAG, "entered startVideoProgressTimer");
      this.mStartVideoProgressTimer = new java.util.Timer();
      this.mVideoProgressTracker = new java.util.LinkedList();
      this.mStartVideoProgressTimer.schedule(new com.gameloft.glads.vast.activity.VASTActivity$8(this, this), 0, 250);
    }

    private void stopQuartileTimer()
    {
      if ( this.mTrackingEventTimer != null )
      {
        this.mTrackingEventTimer.cancel();
        this.mTrackingEventTimer = null;
      }
    }

    private void stopToolBarTimer()
    {
      VASTLog.d(TAG, "entered stopToolBarTimer");
      if ( this.mToolBarTimer != null )
      {
        this.mToolBarTimer.cancel();
        this.mToolBarTimer = null;
      }
    }

    private void stopVideoProgressTimer()
    {
      VASTLog.d(TAG, "entered stopVideoProgressTimer");
      if ( this.mStartVideoProgressTimer != null )
        this.mStartVideoProgressTimer.cancel();
    }

    private void unpause()
    {
      new com.gameloft.glads.vast.activity.VASTActivity$1(this).start();
    }

    public void onBackPressed()
    {
      VASTLog.d(TAG, "entered onBackPressed");
      this.closeClicked();
    }

    public void onCompletion(android.media.MediaPlayer p0)
    {
      VASTLog.d(TAG, "entered onCOMPLETION -- (MediaPlayer callback)");
      this.stopVideoProgressTimer();
      this.stopToolBarTimer();
      this.mButtonPanel.setVisibility(0);
      this.mPlayPauseButton.setImageDrawable(this.mPlayDrawable);
      if ( !this.mIsPlayBackError && !this.mIsCompleted )
      {
        this.mIsCompleted = true;
        this.processEvent(TRACKING_EVENTS_TYPE.complete);
      }
    }

    protected void onCreate(android.os.Bundle p0)
    {
      int v2;
      android.util.DisplayMetrics DisplayMetrics; // RETVAL
    
      VASTLog.d(TAG, "in onCreate");
      super.onCreate(p0);
      v2 = (this.getResources().getConfiguration()).orientation;
      VASTLog.d(TAG, "currentOrientation:" + v2);
      if ( v2 == 2 )
      {
        VASTLog.d(TAG, "orientation is landscape");
        this.mVastModel = (com.gameloft.glads.vast.model.VASTModel)this.getIntent().getSerializableExtra("com.nexage.android.vast.player.vastModel");
        if ( this.mVastModel != null )
        {
          this.hideTitleStatusBars();
          this.mHandler = new android.os.Handler();
          DisplayMetrics = this.getResources().getDisplayMetrics();
          this.mScreenWidth = DisplayMetrics.widthPixels;
          this.mScreenHeight = DisplayMetrics.heightPixels;
          this.mTrackingEventMap = this.mVastModel.getTrackingUrls();
          this.createUIComponents();
        }
        else
        {
          VASTLog.e(TAG, "vastModel is null. Stopping activity.");
          this.finish();
        }
      }
      else
      {
        VASTLog.d(TAG, "Orientation is not landscape.....forcing landscape");
        this.setRequestedOrientation(0);
      }
    }

    protected void onDestroy()
    {
      VASTLog.d(TAG, "entered on onDestroy --(life cycle event)");
      super.onDestroy();
    }

    public boolean onError(android.media.MediaPlayer p0, int p1, int p2)
    {
      VASTLog.e(TAG, "entered onError -- (MediaPlayer callback)");
      this.mIsPlayBackError = true;
      VASTLog.e(TAG, "Shutting down Activity due to Media Player errors: WHAT:" + p1 + ": EXTRA:" + p2 + ":");
      this.processErrorEvent();
      this.closeClicked();
      return true;
    }

    protected void onPause()
    {
      try
      {
        VASTLog.d(TAG, "entered on onPause --(life cycle event)");
        super.onPause();
        VASTFullScreen.onVastActivityPause();
        if ( this.mMediaPlayer != null )
          this.mCurrentVideoPosition = this.mMediaPlayer.getCurrentPosition();
        this.cleanActivityUp();
        wasPaused = true;
      }
      catch ( Exception e )
      {
        this.closeClicked();
      }
    }

    public void onPrepared(android.media.MediaPlayer p0)
    {
      VASTLog.d(TAG, "entered onPrepared called --(MediaPlayer callback) ....about to play");
      this.calculateAspectRatio();
      this.mMediaPlayer.start();
      this.hideProgressBar();
      if ( this.mIsVideoPaused )
      {
        VASTLog.d(TAG, "pausing video");
        this.mMediaPlayer.pause();
      }
      else
      {
        this.startVideoProgressTimer();
      }
      VASTLog.d(TAG, "current location in video:" + this.mCurrentVideoPosition);
      if ( this.mCurrentVideoPosition > 0 )
      {
        VASTLog.d(TAG, "seeking to location:" + this.mCurrentVideoPosition);
        this.mMediaPlayer.seekTo(this.mCurrentVideoPosition);
      }
      if ( !this.mIsProcessedImpressions )
        this.processImpressions();
      this.startQuartileTimer();
      this.startToolBarTimer();
      if ( !this.mMediaPlayer.isPlaying() && !this.mIsVideoPaused )
        this.mMediaPlayer.start();
    }

    protected void onRestart()
    {
      VASTLog.d(TAG, "entered on onRestart --(life cycle event)");
      super.onRestart();
      this.createMediaPlayer();
    }

    public void onRestoreInstanceState(android.os.Bundle p0)
    {
      VASTLog.d(TAG, "in onRestoreInstanceState");
      super.onRestoreInstanceState(p0);
    }

    protected void onResume()
    {
      try
      {
        VASTLog.d(TAG, "entered on onResume --(life cycle event)");
        super.onResume();
        VASTFullScreen.onVastActivityResume();
        if ( wasPaused )
        {
          this.createUIComponents();
          this.unpause();
        }
      }
      catch ( Exception e )
      {
        this.closeClicked();
      }
    }

    public void onSaveInstanceState(android.os.Bundle p0)
    {
      VASTLog.d(TAG, "entered onSaveInstanceState ");
      super.onSaveInstanceState(p0);
    }

    protected void onStart()
    {
      VASTLog.d(TAG, "entered onStart --(life cycle event)");
      super.onStart();
    }

    protected void onStop()
    {
      VASTLog.d(TAG, "entered on onStop --(life cycle event)");
      super.onStop();
      wasPaused = false;
    }

    public void onVideoSizeChanged(android.media.MediaPlayer p0, int p1, int p2)
    {
      VASTLog.d(TAG, "entered onVideoSizeChanged -- (MediaPlayer callback)");
      this.mVideoWidth = p1;
      this.mVideoHeight = p2;
      VASTLog.d(TAG, "video size: " + this.mVideoWidth + "x" + this.mVideoHeight);
    }

    public void surfaceChanged(android.view.SurfaceHolder p0, int p1, int p2, int p3)
    {
      VASTLog.d(TAG, "entered surfaceChanged -- (SurfaceHolder callback)");
    }

    public void surfaceCreated(android.view.SurfaceHolder p0)
    {
      String PickedMediaFileURL;
      VASTLog.d(TAG, "surfaceCreated -- (SurfaceHolder callback)");
      try
      {
        this.showProgressBar();
        this.mMediaPlayer.setDisplay(this.mSurfaceHolder);
        PickedMediaFileURL = this.mVastModel.getPickedMediaFileURL();
        VASTLog.d(TAG, "URL for media file:" + PickedMediaFileURL);
        this.mMediaPlayer.setDataSource(PickedMediaFileURL);
        this.mMediaPlayer.prepareAsync();
      }
      catch ( Exception v3 )
      {
        VASTLog.e(TAG, v3.getMessage(), v3);
      }
    }

    public void surfaceDestroyed(android.view.SurfaceHolder p0)
    {
      VASTLog.d(TAG, "entered surfaceDestroyed -- (SurfaceHolder callback)");
      if ( !wasPaused )
        this.cleanUpMediaPlayer();
    }

}
