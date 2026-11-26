// Decompiled from classes.dex (SourceFile: ProgressNoopOutputStream.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class ProgressNoopOutputStream extends java.io.OutputStream implements com.facebook.RequestOutputStream {
    // Fields
    private int batchMax;
    private final android.os.Handler callbackHandler;
    private com.facebook.Request currentRequest;
    private com.facebook.RequestProgress currentRequestProgress;
    private final java.util.Map progressMap;

    // Methods
    ProgressNoopOutputStream(android.os.Handler p0)
    {
      super();
      this.progressMap = new java.util.HashMap();
      this.callbackHandler = p0;
    }

    void addProgress(long p0)
    {
      if ( this.currentRequestProgress == null )
      {
        this.currentRequestProgress = new com.facebook.RequestProgress(this.callbackHandler, this.currentRequest);
        this.progressMap.put(this.currentRequest, this.currentRequestProgress);
      }
      this.currentRequestProgress.addToMax(p0);
      this.batchMax += (int)p0;
    }

    int getMaxProgress()
    {
      return this.batchMax;
    }

    java.util.Map<com.facebook.Request, com.facebook.RequestProgress> getProgressMap()
    {
      return this.progressMap;
    }

    public void setCurrentRequest(com.facebook.Request p0)
    {
      com.facebook.RequestProgress v2;
      this.currentRequest = p0;
      if ( p0 != null )
        v2 = (com.facebook.RequestProgress)this.progressMap.get(p0);
      else
        v2 = null;
      this.currentRequestProgress = v2;
    }

    public void write(int p0)
    {
      this.addProgress(1);
    }

    public void write(byte[] p0)
    {
      this.addProgress(p0.length);
    }

    public void write(byte[] p0, int p1, int p2)
    {
      this.addProgress(p2);
    }

}
