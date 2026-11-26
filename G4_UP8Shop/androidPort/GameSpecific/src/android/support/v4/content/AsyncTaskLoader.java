// Decompiled from classes.dex (SourceFile: AsyncTaskLoader.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.os.SystemClock;
import android.support.v4.util.TimeUtils;
public abstract class AsyncTaskLoader<D> extends android.support.v4.content.Loader<D> {
    // Fields
    static boolean DEBUG;
    static java.lang.String TAG;
    volatile android.support.v4.content.AsyncTaskLoader$LoadTask mCancellingTask;
    android.os.Handler mHandler;
    long mLastLoadCompleteTime;
    volatile android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
    long mUpdateThrottle;

    // Methods
    public AsyncTaskLoader(android.content.Context p0)
    {
      super(p0);
      this.mLastLoadCompleteTime = -10000;
    }

    public boolean cancelLoad()
    {
      boolean v1;
      android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask mCancellingTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask v4;
      android.support.v4.content.AsyncTaskLoader$LoadTask v5;
      Runnable v6;
      android.support.v4.content.AsyncTaskLoader$LoadTask v8;
      android.support.v4.content.AsyncTaskLoader$LoadTask v9;
      Runnable v10;
      android.support.v4.content.AsyncTaskLoader$LoadTask v11;
      android.support.v4.content.AsyncTaskLoader$LoadTask v12;
      v1 = false;
      mTask = this.mTask;
      if ( mTask != null )
      {
        mCancellingTask = this.mCancellingTask;
        if ( mCancellingTask != null )
        {
          v4 = this.mTask;
          if ( v4.waiting )
          {
            v5 = this.mTask;
            v5.waiting = false;
            v6 = (Runnable)this.mTask;
            this.mHandler.removeCallbacks(v6);
          }
        }
        else
        {
          v8 = this.mTask;
          if ( v8.waiting )
          {
            v9 = this.mTask;
            v9.waiting = false;
            v10 = (Runnable)this.mTask;
            this.mHandler.removeCallbacks(v10);
            this.mTask = null;
            return v1;
          }
          v11 = this.mTask;
          v1 = v11.cancel(false);
          if ( v1 )
          {
            v12 = this.mTask;
            this.mCancellingTask = v12;
          }
        }
        this.mTask = null;
      }
      return v1;
    }

    void dispatchOnCancelled(android.support.v4.content.AsyncTaskLoader$LoadTask p0, D p1)
    {
      android.support.v4.content.AsyncTaskLoader$LoadTask mCancellingTask;
      this.onCanceled(p1);
      mCancellingTask = this.mCancellingTask;
      if ( mCancellingTask == p0 )
      {
        this.rollbackContentChanged();
        this.mLastLoadCompleteTime = SystemClock.uptimeMillis();
        this.mCancellingTask = null;
        this.executePendingTask();
      }
    }

    void dispatchOnLoadComplete(android.support.v4.content.AsyncTaskLoader$LoadTask p0, D p1)
    {
      android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
      mTask = this.mTask;
      if ( mTask == p0 )
      {
        if ( this.isAbandoned() )
        {
          this.onCanceled(p1);
        }
        else
        {
          this.commitContentChanged();
          this.mLastLoadCompleteTime = SystemClock.uptimeMillis();
          this.mTask = null;
          this.deliverResult(p1);
        }
      }
      else
      {
        this.dispatchOnCancelled(p0, p1);
      }
    }

    public void dump(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask v6;
      android.support.v4.content.AsyncTaskLoader$LoadTask v7;
      android.support.v4.content.AsyncTaskLoader$LoadTask mCancellingTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask v9;
      android.support.v4.content.AsyncTaskLoader$LoadTask v10;
      super.dump(p0, p1, p2, p3);
      mTask = this.mTask;
      if ( mTask != null )
      {
        p2.print(p0);
        p2.print("mTask=");
        v6 = this.mTask;
        p2.print(v6);
        p2.print(" waiting=");
        v7 = this.mTask;
        p2.println(v7.waiting);
      }
      mCancellingTask = this.mCancellingTask;
      if ( mCancellingTask != null )
      {
        p2.print(p0);
        p2.print("mCancellingTask=");
        v9 = this.mCancellingTask;
        p2.print(v9);
        p2.print(" waiting=");
        v10 = this.mCancellingTask;
        p2.println(v10.waiting);
      }
      if ( this.mUpdateThrottle != 0 )
      {
        p2.print(p0);
        p2.print("mUpdateThrottle=");
        TimeUtils.formatDuration(this.mUpdateThrottle, p2);
        p2.print(" mLastLoadCompleteTime=");
        TimeUtils.formatDuration(this.mLastLoadCompleteTime, SystemClock.uptimeMillis(), p2);
        p2.println();
      }
    }

    void executePendingTask()
    {
      android.support.v4.content.AsyncTaskLoader$LoadTask mCancellingTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
      android.support.v4.content.AsyncTaskLoader$LoadTask v3;
      android.support.v4.content.AsyncTaskLoader$LoadTask v4;
      Runnable v5;
      android.support.v4.content.AsyncTaskLoader$LoadTask v6;
      Runnable v7;
      android.support.v4.content.AsyncTaskLoader$LoadTask v8;
      mCancellingTask = this.mCancellingTask;
      if ( mCancellingTask == null )
      {
        mTask = this.mTask;
        if ( mTask != null )
        {
          v3 = this.mTask;
          if ( v3.waiting )
          {
            v4 = this.mTask;
            v4.waiting = false;
            v5 = (Runnable)this.mTask;
            this.mHandler.removeCallbacks(v5);
          }
          if ( this.mUpdateThrottle <= 0 || SystemClock.uptimeMillis() >= this.mLastLoadCompleteTime + this.mUpdateThrottle )
          {
            v8 = this.mTask;
            v8.executeOnExecutor(ModernAsyncTask.THREAD_POOL_EXECUTOR, null);
          }
          else
          {
            v6 = this.mTask;
            v6.waiting = true;
            v7 = (Runnable)this.mTask;
            this.mHandler.postAtTime(v7, this.mLastLoadCompleteTime + this.mUpdateThrottle);
          }
        }
      }
    }

    public abstract java.lang.Object loadInBackground();

    public void onCanceled(D p0)
    {
      ;
    }

    protected void onForceLoad()
    {
      super.onForceLoad();
      this.cancelLoad();
      this.mTask = new android.support.v4.content.AsyncTaskLoader$LoadTask(this);
      this.executePendingTask();
    }

    protected D onLoadInBackground()
    {
      return (D)this.loadInBackground();
    }

    public void setUpdateThrottle(long p0)
    {
      this.mUpdateThrottle = p0;
      if ( p0 != 0 )
        this.mHandler = new android.os.Handler();
    }

    public void waitForLoader()
    {
      android.support.v4.content.AsyncTaskLoader$LoadTask mTask;
      mTask = this.mTask;
      if ( mTask != null )
      {
        try
        {
          AsyncTaskLoader$LoadTask.access$000(mTask).await();
        }
        catch ( InterruptedException e )
        {
        }
      }
    }

}
