// Decompiled from classes.dex (SourceFile: AutoScrollHelper$ClampedScroller.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.view.animation.AnimationUtils;
class AutoScrollHelper$ClampedScroller {
    // Fields
    private long mDeltaTime;
    private int mDeltaX;
    private int mDeltaY;
    private int mEffectiveRampDown;
    private int mRampDownDuration;
    private int mRampUpDuration;
    private long mStartTime;
    private long mStopTime;
    private float mStopValue;
    private float mTargetVelocityX;
    private float mTargetVelocityY;

    // Methods
    public AutoScrollHelper$ClampedScroller()
    {
      super();
      this.mStartTime = 0x8000000000000000L;
      this.mStopTime = -1;
      this.mDeltaTime = 0;
      this.mDeltaX = 0;
      this.mDeltaY = 0;
    }

    private float getValueAt(long p0)
    {
      float v2;
      v2 = 0.0f;
      if ( p0 >= this.mStartTime )
      {
        if ( this.mStopTime >= 0 && p0 >= this.mStopTime )
          return 1.0f
               - this.mStopValue
               + AutoScrollHelper.access$900((float)(p0 - this.mStopTime) / (float)this.mEffectiveRampDown, 0.0f, 1.0f)
               * this.mStopValue;
        else
          return AutoScrollHelper.access$900((float)(p0 - this.mStartTime) / (float)this.mRampUpDuration, 0.0f, 1.0f) * 0.5f;
      }
      return v2;
    }

    private float interpolateValue(float p0)
    {
      return -4.0f * p0 * p0 + 4.0f * p0;
    }

    public void computeScrollDelta()
    {
      long v1;
      float v2; // RETVAL
      long v3;
      if ( this.mDeltaTime == 0 )
        throw new RuntimeException("Cannot compute scroll delta before calling start()");
      v1 = AnimationUtils.currentAnimationTimeMillis();
      v2 = this.interpolateValue(this.getValueAt(v1));
      v3 = v1 - this.mDeltaTime;
      this.mDeltaTime = v1;
      this.mDeltaX = (int)((float)v3 * v2 * this.mTargetVelocityX);
      this.mDeltaY = (int)((float)v3 * v2 * this.mTargetVelocityY);
    }

    public int getDeltaX()
    {
      return this.mDeltaX;
    }

    public int getDeltaY()
    {
      return this.mDeltaY;
    }

    public int getHorizontalDirection()
    {
      return (int)(this.mTargetVelocityX / Math.abs(this.mTargetVelocityX));
    }

    public int getVerticalDirection()
    {
      return (int)(this.mTargetVelocityY / Math.abs(this.mTargetVelocityY));
    }

    public boolean isFinished()
    {
      return this.mStopTime > 0 && AnimationUtils.currentAnimationTimeMillis() > this.mStopTime + this.mEffectiveRampDown;
    }

    public void requestStop()
    {
      long v1;
      v1 = AnimationUtils.currentAnimationTimeMillis();
      this.mEffectiveRampDown = AutoScrollHelper.access$800((int)(v1 - this.mStartTime), 0, this.mRampDownDuration);
      this.mStopValue = this.getValueAt(v1);
      this.mStopTime = v1;
    }

    public void setRampDownDuration(int p0)
    {
      this.mRampDownDuration = p0;
    }

    public void setRampUpDuration(int p0)
    {
      this.mRampUpDuration = p0;
    }

    public void setTargetVelocity(float p0, float p1)
    {
      this.mTargetVelocityX = p0;
      this.mTargetVelocityY = p1;
    }

    public void start()
    {
      this.mStartTime = AnimationUtils.currentAnimationTimeMillis();
      this.mStopTime = -1;
      this.mDeltaTime = this.mStartTime;
      this.mStopValue = 0.5f;
      this.mDeltaX = 0;
      this.mDeltaY = 0;
    }

}
