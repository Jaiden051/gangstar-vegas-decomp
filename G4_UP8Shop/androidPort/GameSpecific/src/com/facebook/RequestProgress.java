// Decompiled from classes.dex (SourceFile: RequestProgress.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class RequestProgress {
    // Fields
    private final android.os.Handler callbackHandler;
    private long lastReportedProgress;
    private long maxProgress;
    private long progress;
    private final com.facebook.Request request;
    private final long threshold;

    // Methods
    RequestProgress(android.os.Handler p0, com.facebook.Request p1)
    {
      super();
      this.request = p1;
      this.callbackHandler = p0;
      this.threshold = Settings.getOnProgressThreshold();
    }

    void addProgress(long p0)
    {
      this.progress += p0;
      if ( this.progress >= this.lastReportedProgress + this.threshold || this.progress >= this.maxProgress )
        this.reportProgress();
    }

    void addToMax(long p0)
    {
      this.maxProgress += p0;
    }

    long getMaxProgress()
    {
      return this.maxProgress;
    }

    long getProgress()
    {
      return this.progress;
    }

    void reportProgress()
    {
      com.facebook.Request$Callback Callback; // RETVAL
      long progress;
      long maxProgress;
      com.facebook.Request$OnProgressCallback v4;
      if ( this.progress > this.lastReportedProgress )
      {
        Callback = this.request.getCallback();
        if ( this.maxProgress > 0 && Callback instanceof com.facebook.Request$OnProgressCallback )
        {
          progress = this.progress;
          maxProgress = this.maxProgress;
          v4 = (com.facebook.Request$OnProgressCallback)Callback;
          if ( this.callbackHandler != null )
            this.callbackHandler.post((Runnable)new com.facebook.RequestProgress$1(this, v4, progress, maxProgress));
          else
            v4.onProgress(progress, maxProgress);
          this.lastReportedProgress = this.progress;
        }
      }
    }

}
