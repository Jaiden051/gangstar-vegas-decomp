// Decompiled from classes.dex (SourceFile: AutoScrollHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.content.res.Resources;
import android.os.SystemClock;
import android.support.v4.view.MotionEventCompat;
import android.support.v4.view.ViewCompat;
import android.view.MotionEvent;
import android.view.ViewConfiguration;
public abstract class AutoScrollHelper implements android.view.View.OnTouchListener {
    // Fields
    private static final int DEFAULT_ACTIVATION_DELAY;
    private static int DEFAULT_EDGE_TYPE;
    private static float DEFAULT_MAXIMUM_EDGE;
    private static int DEFAULT_MAXIMUM_VELOCITY_DIPS;
    private static int DEFAULT_MINIMUM_VELOCITY_DIPS;
    private static int DEFAULT_RAMP_DOWN_DURATION;
    private static int DEFAULT_RAMP_UP_DURATION;
    private static float DEFAULT_RELATIVE_EDGE;
    private static float DEFAULT_RELATIVE_VELOCITY;
    public static int EDGE_TYPE_INSIDE;
    public static int EDGE_TYPE_INSIDE_EXTEND;
    public static int EDGE_TYPE_OUTSIDE;
    private static int HORIZONTAL;
    public static float NO_MAX;
    public static float NO_MIN;
    public static float RELATIVE_UNSPECIFIED;
    private static int VERTICAL;
    private int mActivationDelay;
    private boolean mAlreadyDelayed;
    private boolean mAnimating;
    private final android.view.animation.Interpolator mEdgeInterpolator;
    private int mEdgeType;
    private boolean mEnabled;
    private boolean mExclusive;
    private float[] mMaximumEdges;
    private float[] mMaximumVelocity;
    private float[] mMinimumVelocity;
    private boolean mNeedsCancel;
    private boolean mNeedsReset;
    private float[] mRelativeEdges;
    private float[] mRelativeVelocity;
    private java.lang.Runnable mRunnable;
    private final android.support.v4.widget.AutoScrollHelper$ClampedScroller mScroller;
    private final android.view.View mTarget;

    // Methods
    static
    {
      DEFAULT_ACTIVATION_DELAY = ViewConfiguration.getTapTimeout();
    }

    public AutoScrollHelper(android.view.View p0)
    {
      super();
      android.util.DisplayMetrics DisplayMetrics; // RETVAL
      int v3;
      float v4;
      this.mScroller = new android.support.v4.widget.AutoScrollHelper$ClampedScroller();
      this.mEdgeInterpolator = new android.view.animation.AccelerateInterpolator();
      this.mRelativeEdges = new float[] { 0, 0 };
      this.mMaximumEdges = new float[] { 2139095039, 2139095039 };
      this.mRelativeVelocity = new float[] { 0, 0 };
      this.mMinimumVelocity = new float[] { 0, 0 };
      this.mMaximumVelocity = new float[] { 2139095039, 2139095039 };
      this.mTarget = p0;
      DisplayMetrics = Resources.getSystem().getDisplayMetrics();
      v3 = (int)(DisplayMetrics.density * 315.0f + 0.5f);
      v4 = (float)(int)(1575.0f * DisplayMetrics.density + 0.5f);
      this.setMaximumVelocity(v4, v4);
      this.setMinimumVelocity((float)v3, (float)v3);
      this.setEdgeType(1);
      this.setMaximumEdges(3.4028235e38f, 3.4028235e38f);
      this.setRelativeEdges(0.2f, 0.2f);
      this.setRelativeVelocity(1.0f, 1.0f);
      this.setActivationDelay(DEFAULT_ACTIVATION_DELAY);
      this.setRampUpDuration(500);
      this.setRampDownDuration(500);
    
    }

    /* synthetic */ static boolean access$100(android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.mAnimating;
    }

    /* synthetic */ static boolean access$102(android.support.v4.widget.AutoScrollHelper p0, boolean p1)
    {
      p0.mAnimating = p1;
      return p1;
    }

    /* synthetic */ static boolean access$200(android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.mNeedsReset;
    }

    /* synthetic */ static boolean access$202(android.support.v4.widget.AutoScrollHelper p0, boolean p1)
    {
      p0.mNeedsReset = p1;
      return p1;
    }

    /* synthetic */ static android.support.v4.widget.AutoScrollHelper$ClampedScroller access$300(
            android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.mScroller;
    }

    /* synthetic */ static boolean access$400(android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.shouldAnimate();
    }

    /* synthetic */ static boolean access$500(android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.mNeedsCancel;
    }

    /* synthetic */ static boolean access$502(android.support.v4.widget.AutoScrollHelper p0, boolean p1)
    {
      p0.mNeedsCancel = p1;
      return p1;
    }

    /* synthetic */ static void access$600(android.support.v4.widget.AutoScrollHelper p0)
    {
      p0.cancelTargetTouch();
    }

    /* synthetic */ static android.view.View access$700(android.support.v4.widget.AutoScrollHelper p0)
    {
      return p0.mTarget;
    }

    /* synthetic */ static int access$800(int p0, int p1, int p2)
    {
      return constrain(p0, p1, p2);
    }

    /* synthetic */ static float access$900(float p0, float p1, float p2)
    {
      return constrain(p0, p1, p2);
    }

    private void cancelTargetTouch()
    {
      long v1; // RETVAL
      android.view.MotionEvent v2;
      v1 = SystemClock.uptimeMillis();
      v2 = MotionEvent.obtain(v1, v1, 3, 0.0f, 0.0f, 0);
      this.mTarget.onTouchEvent(v2);
      v2.recycle();
    }

    private float computeTargetVelocity(int p0, float p1, float p2, float p3)
    {
      float v5;
      float EdgeValue; // RETVAL
      float v8;
      float v9;
      float v10;
      v5 = 0.0f;
      EdgeValue = this.getEdgeValue(Float.intBitsToFloat(Float.floatToRawIntBits(this.mRelativeEdges[p0])), p2, Float.intBitsToFloat(Float.floatToRawIntBits(this.mMaximumEdges[p0])), p1);
      if ( EdgeValue != 0.0f )
      {
        v8 = Float.intBitsToFloat(Float.floatToRawIntBits(this.mMinimumVelocity[p0]));
        v9 = Float.intBitsToFloat(Float.floatToRawIntBits(this.mMaximumVelocity[p0]));
        v10 = Float.intBitsToFloat(Float.floatToRawIntBits(this.mRelativeVelocity[p0])) * p3;
        if ( EdgeValue <= 0.0f )
          return -constrain(-EdgeValue * v10, v8, v9);
        else
          return constrain(EdgeValue * v10, v8, v9);
      }
      return v5;
    }

    private static float constrain(float p0, float p1, float p2)
    {
      if ( p0 <= p2 )
      {
        if ( p0 >= p1 )
          return p0;
        else
          return p1;
      }
      return p2;
    }

    private static int constrain(int p0, int p1, int p2)
    {
      if ( p0 <= p2 )
      {
        if ( p0 >= p1 )
          return p0;
        else
          return p1;
      }
      return p2;
    }

    private float constrainEdgeValue(float p0, float p1)
    {
      float v3;
      v3 = 0.0f;
      if ( p1 != 0.0f )
      {
        switch ( this.mEdgeType )
        {
          case 0:
          case 1:
            if ( p0 < p1 )
            {
              if ( p0 < 0.0f )
              {
                if ( this.mAnimating && this.mEdgeType == 1 )
                  v3 = 1.0f;
              }
              else
              {
                v3 = 1.0f - p0 / p1;
              }
            }
            break;
          case 2:
            if ( p0 < 0.0f )
              v3 = p0 / -p1;
            break;
          default:
            return v3;
        }
      }
      return v3;
    }

    private float getEdgeValue(float p0, float p1, float p2, float p3)
    {
      float v5;
      float v6;
      float v7;
      float Interpolation;
      v5 = 0.0f;
      v6 = constrain(p0 * p1, 0.0f, p2);
      v7 = this.constrainEdgeValue(p1 - p3, v6) - this.constrainEdgeValue(p3, v6);
      if ( v7 >= 0.0f )
      {
        if ( v7 <= 0.0f )
          return v5;
        Interpolation = this.mEdgeInterpolator.getInterpolation(v7);
      }
      else
      {
        Interpolation = -this.mEdgeInterpolator.getInterpolation(-v7);
      }
      return constrain(Interpolation, -1.0f, 1.0f);
    }

    private void requestStop()
    {
      if ( this.mNeedsReset )
        this.mAnimating = false;
      else
        this.mScroller.requestStop();
    }

    private boolean shouldAnimate()
    {
      android.support.v4.widget.AutoScrollHelper$ClampedScroller mScroller;
      int VerticalDirection;
      int HorizontalDirection;
      mScroller = this.mScroller;
      VerticalDirection = mScroller.getVerticalDirection();
      HorizontalDirection = mScroller.getHorizontalDirection();
      return VerticalDirection != 0 && this.canTargetScrollVertically(VerticalDirection)
          || HorizontalDirection != 0 && this.canTargetScrollHorizontally(HorizontalDirection);
    }

    private void startAnimating()
    {
      if ( this.mRunnable == null )
        this.mRunnable = (Runnable)new android.support.v4.widget.AutoScrollHelper$ScrollAnimationRunnable(this, null);
      this.mAnimating = true;
      this.mNeedsReset = true;
      if ( this.mAlreadyDelayed || this.mActivationDelay <= 0 )
        this.mRunnable.run();
      else
        ViewCompat.postOnAnimationDelayed(this.mTarget, this.mRunnable, this.mActivationDelay);
      this.mAlreadyDelayed = true;
    }

    public abstract boolean canTargetScrollHorizontally(int p0);

    public abstract boolean canTargetScrollVertically(int p0);

    public boolean isEnabled()
    {
      return this.mEnabled;
    }

    public boolean isExclusive()
    {
      return this.mExclusive;
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      boolean v3 = false;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = false;
            if ( !(this.mEnabled) ) { _pc = 6; continue _sm; }
            _sw_1 = (MotionEventCompat.getActionMasked(p1));
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) || (_sw_1 == (3)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 1:
            this.mNeedsCancel = true;
            this.mAlreadyDelayed = false;
            _pc = 3;
            continue _sm;
          case 2:
            this.requestStop();
            _pc = 5;
            continue _sm;
          case 3:
            this.mScroller.setTargetVelocity(this.computeTargetVelocity(0, p1.getX(), (float)p0.getWidth(), (float)this.mTarget.getWidth()), this.computeTargetVelocity(1, p1.getY(), (float)p0.getHeight(), (float)this.mTarget.getHeight()));
            if ( !this.mAnimating && this.shouldAnimate() )
            this.startAnimating();
            _pc = 5;
            continue _sm;
          case 4:
            _pc = 5;
            continue _sm;
          case 5:
            if ( this.mExclusive && this.mAnimating )
            return true;
            _pc = 6;
            continue _sm;
          case 6:
            return v3;
        }
      }
}

    public abstract void scrollTargetBy(int p0, int p1);

    public android.support.v4.widget.AutoScrollHelper setActivationDelay(int p0)
    {
      this.mActivationDelay = p0;
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setEdgeType(int p0)
    {
      this.mEdgeType = p0;
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setEnabled(boolean p0)
    {
      if ( this.mEnabled && !p0 )
        this.requestStop();
      this.mEnabled = p0;
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setExclusive(boolean p0)
    {
      this.mExclusive = p0;
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setMaximumEdges(float p0, float p1)
    {
      this.mMaximumEdges[0] = (p0);
      this.mMaximumEdges[1] = (p1);
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setMaximumVelocity(float p0, float p1)
    {
      this.mMaximumVelocity[0] = Float.intBitsToFloat(Float.floatToRawIntBits(p0 / 1000.0f));
      this.mMaximumVelocity[1] = Float.intBitsToFloat(Float.floatToRawIntBits(p1 / 1000.0f));
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setMinimumVelocity(float p0, float p1)
    {
      this.mMinimumVelocity[0] = Float.intBitsToFloat(Float.floatToRawIntBits(p0 / 1000.0f));
      this.mMinimumVelocity[1] = Float.intBitsToFloat(Float.floatToRawIntBits(p1 / 1000.0f));
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRampDownDuration(int p0)
    {
      this.mScroller.setRampDownDuration(p0);
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRampUpDuration(int p0)
    {
      this.mScroller.setRampUpDuration(p0);
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRelativeEdges(float p0, float p1)
    {
      this.mRelativeEdges[0] = (p0);
      this.mRelativeEdges[1] = (p1);
      return this;
    }

    public android.support.v4.widget.AutoScrollHelper setRelativeVelocity(float p0, float p1)
    {
      this.mRelativeVelocity[0] = Float.intBitsToFloat(Float.floatToRawIntBits(p0 / 1000.0f));
      this.mRelativeVelocity[1] = Float.intBitsToFloat(Float.floatToRawIntBits(p1 / 1000.0f));
      return this;
    }

}
