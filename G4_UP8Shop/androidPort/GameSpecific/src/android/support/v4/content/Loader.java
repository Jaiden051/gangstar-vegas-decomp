// Decompiled from classes.dex (SourceFile: Loader.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

import android.support.v4.util.DebugUtils;
public class Loader<D> {
    // Fields
    boolean mAbandoned;
    boolean mContentChanged;
    android.content.Context mContext;
    int mId;
    android.support.v4.content.Loader$OnLoadCompleteListener mListener;
    boolean mProcessingChange;
    boolean mReset;
    boolean mStarted;

    // Methods
    public Loader(android.content.Context p0)
    {
      super();
      this.mStarted = false;
      this.mAbandoned = false;
      this.mReset = true;
      this.mContentChanged = false;
      this.mProcessingChange = false;
      this.mContext = p0.getApplicationContext();
    }

    public void abandon()
    {
      this.mAbandoned = true;
      this.onAbandon();
    }

    public void commitContentChanged()
    {
      this.mProcessingChange = false;
    }

    public String dataToString(D p0)
    {
      StringBuilder v2;
      v2 = new StringBuilder(64);
      DebugUtils.buildShortClassTag(p0, v2);
      v2.append("}");
      return v2.toString();
    }

    public void deliverResult(D p0)
    {
      if ( this.mListener != null )
        this.mListener.onLoadComplete(this, p0);
    }

    public void dump(String p0, java.io.FileDescriptor p1, java.io.PrintWriter p2, String[] p3)
    {
      p2.print(p0);
      p2.print("mId=");
      p2.print(this.mId);
      p2.print(" mListener=");
      p2.println(this.mListener);
      if ( this.mStarted || this.mContentChanged || this.mProcessingChange )
      {
        p2.print(p0);
        p2.print("mStarted=");
        p2.print(this.mStarted);
        p2.print(" mContentChanged=");
        p2.print(this.mContentChanged);
        p2.print(" mProcessingChange=");
        p2.println(this.mProcessingChange);
      }
      if ( this.mAbandoned || this.mReset )
      {
        p2.print(p0);
        p2.print("mAbandoned=");
        p2.print(this.mAbandoned);
        p2.print(" mReset=");
        p2.println(this.mReset);
      }
    }

    public void forceLoad()
    {
      this.onForceLoad();
    }

    public android.content.Context getContext()
    {
      return this.mContext;
    }

    public int getId()
    {
      return this.mId;
    }

    public boolean isAbandoned()
    {
      return this.mAbandoned;
    }

    public boolean isReset()
    {
      return this.mReset;
    }

    public boolean isStarted()
    {
      return this.mStarted;
    }

    protected void onAbandon()
    {
      ;
    }

    public void onContentChanged()
    {
      if ( this.mStarted )
        this.forceLoad();
      else
        this.mContentChanged = true;
    }

    protected void onForceLoad()
    {
      ;
    }

    protected void onReset()
    {
      ;
    }

    protected void onStartLoading()
    {
      ;
    }

    protected void onStopLoading()
    {
      ;
    }

    public void registerListener(int p0, android.support.v4.content.Loader$OnLoadCompleteListener<D> p1)
    {
      if ( this.mListener != null )
        throw new IllegalStateException("There is already a listener registered");
      this.mListener = p1;
      this.mId = p0;
    }

    public void reset()
    {
      this.onReset();
      this.mReset = true;
      this.mStarted = false;
      this.mAbandoned = false;
      this.mContentChanged = false;
      this.mProcessingChange = false;
    }

    public void rollbackContentChanged()
    {
      if ( this.mProcessingChange )
        this.mContentChanged = true;
    }

    public final void startLoading()
    {
      this.mStarted = true;
      this.mReset = false;
      this.mAbandoned = false;
      this.onStartLoading();
    }

    public void stopLoading()
    {
      this.mStarted = false;
      this.onStopLoading();
    }

    public boolean takeContentChanged()
    {
      boolean mContentChanged;
      mContentChanged = this.mContentChanged;
      this.mContentChanged = false;
      this.mProcessingChange = this.mProcessingChange || mContentChanged;
      return mContentChanged;
    }

    public String toString()
    {
      StringBuilder v1;
      v1 = new StringBuilder(64);
      DebugUtils.buildShortClassTag(this, v1);
      v1.append(" id=");
      v1.append(this.mId);
      v1.append("}");
      return v1.toString();
    }

    public void unregisterListener(android.support.v4.content.Loader$OnLoadCompleteListener<D> p0)
    {
      if ( this.mListener == null )
        throw new IllegalStateException("No listener register");
      if ( this.mListener != p0 )
        throw new IllegalArgumentException("Attempting to unregister the wrong listener");
      this.mListener = null;
    }

}
