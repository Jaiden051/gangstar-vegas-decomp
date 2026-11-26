// Decompiled from classes.dex (SourceFile: ProgressOutputStream.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class ProgressOutputStream extends java.io.FilterOutputStream implements com.facebook.RequestOutputStream {
    // Fields
    private long batchProgress;
    private com.facebook.RequestProgress currentRequestProgress;
    private long lastReportedProgress;
    private long maxProgress;
    private final java.util.Map progressMap;
    private final com.facebook.RequestBatch requests;
    private final long threshold;

    // Methods
    ProgressOutputStream(
            java.io.OutputStream p0,
            com.facebook.RequestBatch p1,
            java.util.Map<com.facebook.Request, com.facebook.RequestProgress> p2,
            long p3)
    {
      super(p0);
      this.requests = p1;
      this.progressMap = p2;
      this.maxProgress = p3;
      this.threshold = Settings.getOnProgressThreshold();
    }

    /* synthetic */ static com.facebook.RequestBatch access$000(com.facebook.ProgressOutputStream p0)
    {
      return p0.requests;
    }

    /* synthetic */ static long access$100(com.facebook.ProgressOutputStream p0)
    {
      return p0.batchProgress;
    }

    /* synthetic */ static long access$200(com.facebook.ProgressOutputStream p0)
    {
      return p0.maxProgress;
    }

    private void addProgress(long p0)
    {
      if ( this.currentRequestProgress != null )
        this.currentRequestProgress.addProgress(p0);
      this.batchProgress += p0;
      if ( this.batchProgress >= this.lastReportedProgress + this.threshold || this.batchProgress >= this.maxProgress )
        this.reportBatchProgress();
    }

    private void reportBatchProgress()
    {
      java.util.Iterator v1;
      com.facebook.RequestBatch$Callback v2;
      android.os.Handler CallbackHandler; // RETVAL
      com.facebook.RequestBatch$OnProgressCallback v4;
      if ( this.batchProgress > this.lastReportedProgress )
      {
        v1 = this.requests.getCallbacks().iterator();
        while ( v1.hasNext() )
        {
          v2 = (com.facebook.RequestBatch$Callback)v1.next();
          if ( v2 instanceof com.facebook.RequestBatch$OnProgressCallback )
          {
            CallbackHandler = this.requests.getCallbackHandler();
            v4 = (com.facebook.RequestBatch$OnProgressCallback)v2;
            if ( CallbackHandler != null )
              CallbackHandler.post((Runnable)new com.facebook.ProgressOutputStream$1(this, v4));
            else
              v4.onBatchProgress(this.requests, this.batchProgress, this.maxProgress);
          }
        }
        this.lastReportedProgress = this.batchProgress;
      }
    }

    public void close()
 throws java.io.IOException {
      java.util.Iterator i;
      super.close();
      for ( i = this.progressMap.values().iterator(); i.hasNext(); ((com.facebook.RequestProgress)i.next()).reportProgress() )
        ;
      this.reportBatchProgress();
    }

    long getBatchProgress()
    {
      return this.batchProgress;
    }

    long getMaxProgress()
    {
      return this.maxProgress;
    }

    public void setCurrentRequest(com.facebook.Request p0)
    {
      com.facebook.RequestProgress v2;
      if ( p0 != null )
        v2 = (com.facebook.RequestProgress)this.progressMap.get(p0);
      else
        v2 = null;
      this.currentRequestProgress = v2;
    }

    public void write(int p0)
 throws java.io.IOException {
      this.out.write(p0);
      this.addProgress(1);
    }

    public void write(byte[] p0)
 throws java.io.IOException {
      this.out.write(p0);
      this.addProgress(p0.length);
    }

    public void write(byte[] p0, int p1, int p2)
 throws java.io.IOException {
      this.out.write(p0, p1, p2);
      this.addProgress(p2);
    }

}
