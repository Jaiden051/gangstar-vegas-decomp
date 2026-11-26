// Decompiled from classes.dex (SourceFile: RequestBatch.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import java.util.Arrays;
public class RequestBatch extends java.util.AbstractList<com.facebook.Request> {
    // Fields
    private static java.util.concurrent.atomic.AtomicInteger idGenerator;
    private java.lang.String batchApplicationId;
    private android.os.Handler callbackHandler;
    private java.util.List callbacks;
    private final java.lang.String id;
    private java.util.List requests;
    private int timeoutInMilliseconds;

    // Methods
    static
    {
      idGenerator = new java.util.concurrent.atomic.AtomicInteger();
    }

    public RequestBatch()
    {
      super();
      this.requests = new java.util.ArrayList();
      this.timeoutInMilliseconds = 0;
      this.id = Integer.valueOf(idGenerator.incrementAndGet()).toString();
      this.callbacks = new java.util.ArrayList();
      this.requests = new java.util.ArrayList();
    }

    public RequestBatch(com.facebook.RequestBatch p0)
    {
      super();
      this.requests = new java.util.ArrayList();
      this.timeoutInMilliseconds = 0;
      this.id = Integer.valueOf(idGenerator.incrementAndGet()).toString();
      this.callbacks = new java.util.ArrayList();
      this.requests = new java.util.ArrayList(p0);
      this.callbackHandler = p0.callbackHandler;
      this.timeoutInMilliseconds = p0.timeoutInMilliseconds;
      this.callbacks = new java.util.ArrayList(p0.callbacks);
    }

    public RequestBatch(java.util.Collection<com.facebook.Request> p0)
    {
      super();
      this.requests = new java.util.ArrayList();
      this.timeoutInMilliseconds = 0;
      this.id = Integer.valueOf(idGenerator.incrementAndGet()).toString();
      this.callbacks = new java.util.ArrayList();
      this.requests = new java.util.ArrayList(p0);
    }

    public RequestBatch(com.facebook.Request[] p0)
    {
      super();
      this.requests = new java.util.ArrayList();
      this.timeoutInMilliseconds = 0;
      this.id = Integer.valueOf(idGenerator.incrementAndGet()).toString();
      this.callbacks = new java.util.ArrayList();
      this.requests = Arrays.asList(p0);
    }

    public final void add(int p0, com.facebook.Request p1)
    {
      this.requests.add(p0, p1);
    }



    public final boolean add(com.facebook.Request p0)
    {
      return this.requests.add(p0);
    }



    public void addCallback(com.facebook.RequestBatch$Callback p0)
    {
      if ( !this.callbacks.contains(p0) )
        this.callbacks.add(p0);
    }

    public final void clear()
    {
      this.requests.clear();
    }

    public final java.util.List<com.facebook.Response> executeAndWait()
    {
      return this.executeAndWaitImpl();
    }

    java.util.List<com.facebook.Response> executeAndWaitImpl()
    {
      return Request.executeBatchAndWait(this);
    }

    public final com.facebook.RequestAsyncTask executeAsync()
    {
      return this.executeAsyncImpl();
    }

    com.facebook.RequestAsyncTask executeAsyncImpl()
    {
      return Request.executeBatchAsync(this);
    }

    public final com.facebook.Request get(int p0)
    {
      return (com.facebook.Request)this.requests.get(p0);
    }



    final String getBatchApplicationId()
    {
      return this.batchApplicationId;
    }

    final android.os.Handler getCallbackHandler()
    {
      return this.callbackHandler;
    }

    final java.util.List<com.facebook.RequestBatch$Callback> getCallbacks()
    {
      return this.callbacks;
    }

    final String getId()
    {
      return this.id;
    }

    final java.util.List<com.facebook.Request> getRequests()
    {
      return this.requests;
    }

    public int getTimeout()
    {
      return this.timeoutInMilliseconds;
    }

    public final com.facebook.Request remove(int p0)
    {
      return (com.facebook.Request)this.requests.remove(p0);
    }



    public void removeCallback(com.facebook.RequestBatch$Callback p0)
    {
      this.callbacks.remove(p0);
    }

    public final com.facebook.Request set(int p0, com.facebook.Request p1)
    {
      return (com.facebook.Request)this.requests.set(p0, p1);
    }



    final void setBatchApplicationId(String p0)
    {
      this.batchApplicationId = p0;
    }

    final void setCallbackHandler(android.os.Handler p0)
    {
      this.callbackHandler = p0;
    }

    public void setTimeout(int p0)
    {
      if ( p0 < 0 )
        throw new IllegalArgumentException("Argument timeoutInMilliseconds must be >= 0.");
      this.timeoutInMilliseconds = p0;
    }

    public final int size()
    {
      return this.requests.size();
    }

}
