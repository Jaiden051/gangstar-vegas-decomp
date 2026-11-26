// Decompiled from classes.dex (SourceFile: ContentLoadingProgressBar.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public class ContentLoadingProgressBar extends android.widget.ProgressBar {
    // Fields
    private static int MIN_DELAY;
    private static int MIN_SHOW_TIME;
    private final java.lang.Runnable mDelayedHide;
    private final java.lang.Runnable mDelayedShow;
    private boolean mDismissed;
    private boolean mPostedHide;
    private boolean mPostedShow;
    private long mStartTime;

    // Methods
    public ContentLoadingProgressBar(android.content.Context p0)
    {
      this(p0, null);
    }

    public ContentLoadingProgressBar(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1, 0);
      this.mStartTime = -1;
      this.mPostedHide = false;
      this.mPostedShow = false;
      this.mDismissed = false;
      this.mDelayedHide = (Runnable)new android.support.v4.widget.ContentLoadingProgressBar$1(this);
      this.mDelayedShow = (Runnable)new android.support.v4.widget.ContentLoadingProgressBar$2(this);
    }

    /* synthetic */ static boolean access$002(
            android.support.v4.widget.ContentLoadingProgressBar p0,
            boolean p1)
    {
      p0.mPostedHide = p1;
      return p1;
    }

    /* synthetic */ static long access$102(
            android.support.v4.widget.ContentLoadingProgressBar p0,
            long p1)
    {
      p0.mStartTime = p1;
      return p1;
    }

    /* synthetic */ static boolean access$202(
            android.support.v4.widget.ContentLoadingProgressBar p0,
            boolean p1)
    {
      p0.mPostedShow = p1;
      return p1;
    }

    /* synthetic */ static boolean access$300(
            android.support.v4.widget.ContentLoadingProgressBar p0)
    {
      return p0.mDismissed;
    }

    private void removeCallbacks()
    {
      this.removeCallbacks(this.mDelayedHide);
      this.removeCallbacks(this.mDelayedShow);
    }

    public void hide()
    {
      long v1;
      this.mDismissed = true;
      this.removeCallbacks(this.mDelayedShow);
      v1 = System.currentTimeMillis() - this.mStartTime;
      if ( v1 >= 500 || this.mStartTime == -1 )
      {
        this.setVisibility(8);
      }
      else if ( !this.mPostedHide )
      {
        this.postDelayed(this.mDelayedHide, 500 - v1);
        this.mPostedHide = true;
      }
    }

    public void onAttachedToWindow()
    {
      super.onAttachedToWindow();
      this.removeCallbacks();
    }

    public void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      this.removeCallbacks();
    }

    public void show()
    {
      this.mStartTime = -1;
      this.mDismissed = false;
      this.removeCallbacks(this.mDelayedHide);
      if ( !this.mPostedShow )
      {
        this.postDelayed(this.mDelayedShow, 500);
        this.mPostedShow = true;
      }
    }

}
