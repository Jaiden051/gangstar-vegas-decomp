// Decompiled from classes.dex (SourceFile: GraphObjectPagingLoader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.Response$PagingDirection;
import com.facebook.Request;
import com.facebook.Response;
class GraphObjectPagingLoader<T> extends android.support.v4.content.Loader<com.facebook.widget.SimpleGraphObjectCursor<T>> {
    // Fields
    private boolean appendResults;
    private com.facebook.Request currentRequest;
    private com.facebook.widget.SimpleGraphObjectCursor cursor;
    private final java.lang.Class graphObjectClass;
    private boolean loading;
    private com.facebook.Request nextRequest;
    private com.facebook.widget.GraphObjectPagingLoader$OnErrorListener onErrorListener;
    private com.facebook.Request originalRequest;
    private boolean skipRoundtripIfCached;

    // Methods
    public GraphObjectPagingLoader(android.content.Context p0, Class<T> p1)
    {
      super(p0);
      this.appendResults = false;
      this.loading = false;
      this.graphObjectClass = p1;
    }

    /* synthetic */ static void access$000(
            com.facebook.widget.GraphObjectPagingLoader p0,
            com.facebook.Response p1)
    {
      p0.requestCompleted(p1);
    }

    private void addResults(com.facebook.Response p0)
    {
      com.facebook.widget.SimpleGraphObjectCursor v2;
      com.facebook.widget.GraphObjectPagingLoader$PagedResults v3;
      boolean v4;
      com.facebook.model.GraphObjectList v5;
      boolean v6;
      if ( this.cursor != null && this.appendResults )
        v2 = new com.facebook.widget.SimpleGraphObjectCursor(this.cursor);
      else
        v2 = new com.facebook.widget.SimpleGraphObjectCursor();
      v3 = (com.facebook.widget.GraphObjectPagingLoader$PagedResults)p0.getGraphObjectAs(com.facebook.widget.GraphObjectPagingLoader$PagedResults.class);
      v4 = p0.getIsFromCache();
      v5 = v3.getData().castToListOf(this.graphObjectClass);
      v6 = v5.size() > 0;
      if ( v6 )
      {
        this.nextRequest = p0.getRequestForPagedResults(Response$PagingDirection.NEXT);
        v2.addGraphObjects((java.util.Collection)v5, v4);
        if ( this.nextRequest != null )
          v2.setMoreObjectsAvailable(true);
        else
          v2.setMoreObjectsAvailable(false);
      }
      if ( !v6 )
      {
        v2.setMoreObjectsAvailable(false);
        v2.setFromCache(v4);
        this.nextRequest = null;
      }
      if ( !v4 )
        this.skipRoundtripIfCached = false;
      this.deliverResult(v2);
    }

    private com.facebook.internal.CacheableRequestBatch putRequestIntoBatch(
            com.facebook.Request p0,
            boolean p1)
    {
      com.facebook.Request[] v3;
      com.facebook.internal.CacheableRequestBatch v4;
      v3 = new com.facebook.Request[1];
      v3[0] = p0;
      v4 = new com.facebook.internal.CacheableRequestBatch(v3);
      v4.setForceRoundTrip(!p1);
      return v4;
    }

    private void requestCompleted(com.facebook.Response p0)
    {
      com.facebook.FacebookRequestError Error; // RETVAL
      com.facebook.FacebookException Exception;
      if ( p0.getRequest() == this.currentRequest )
      {
        this.loading = false;
        this.currentRequest = null;
        Error = p0.getError();
        if ( Error != null )
          Exception = Error.getException();
        else
          Exception = null;
        if ( p0.getGraphObject() == null && Exception == null )
          Exception = new com.facebook.FacebookException("GraphObjectPagingLoader received neither a result nor an error.");
        if ( Exception != null )
        {
          this.nextRequest = null;
          if ( this.onErrorListener != null )
            this.onErrorListener.onError(Exception, this);
        }
        else
        {
          this.addResults(p0);
        }
      }
    }

    private void startLoading(com.facebook.Request p0, boolean p1, long p2)
    {
      Runnable v4;
      this.skipRoundtripIfCached = p1;
      this.appendResults = false;
      this.nextRequest = null;
      this.currentRequest = p0;
      this.currentRequest.setCallback((com.facebook.Request$Callback)new com.facebook.widget.GraphObjectPagingLoader$2(this));
      this.loading = true;
      v4 = (Runnable)new com.facebook.widget.GraphObjectPagingLoader$3(this, this.putRequestIntoBatch(p0, p1));
      if ( p2 != 0 )
        new android.os.Handler().postDelayed(v4, p2);
      else
        v4.run();
    }

    public void clearResults()
    {
      this.nextRequest = null;
      this.originalRequest = null;
      this.currentRequest = null;
      this.deliverResult(null);
    }

    public void deliverResult(com.facebook.widget.SimpleGraphObjectCursor<T> p0)
    {
      com.facebook.widget.SimpleGraphObjectCursor cursor;
      cursor = this.cursor;
      this.cursor = p0;
      if ( this.isStarted() )
      {
        super.deliverResult(p0);
        if ( cursor != null && cursor != p0 && !cursor.isClosed() )
          cursor.close();
      }
    }



    public void followNextLink()
    {
      if ( this.nextRequest != null )
      {
        this.appendResults = true;
        this.currentRequest = this.nextRequest;
        this.currentRequest.setCallback((com.facebook.Request$Callback)new com.facebook.widget.GraphObjectPagingLoader$1(this));
        this.loading = true;
        Request.executeBatchAsync(this.putRequestIntoBatch(this.currentRequest, this.skipRoundtripIfCached));
      }
    }

    public com.facebook.widget.SimpleGraphObjectCursor<T> getCursor()
    {
      return this.cursor;
    }

    public com.facebook.widget.GraphObjectPagingLoader$OnErrorListener getOnErrorListener()
    {
      return this.onErrorListener;
    }

    public boolean isLoading()
    {
      return this.loading;
    }

    protected void onStartLoading()
    {
      super.onStartLoading();
      if ( this.cursor != null )
        this.deliverResult(this.cursor);
    }

    public void refreshOriginalRequest(long p0)
    {
      if ( this.originalRequest == null )
        throw new com.facebook.FacebookException("refreshOriginalRequest may not be called until after startLoading has been called.");
      this.startLoading(this.originalRequest, false, p0);
    }

    public void setOnErrorListener(com.facebook.widget.GraphObjectPagingLoader$OnErrorListener p0)
    {
      this.onErrorListener = p0;
    }

    public void startLoading(com.facebook.Request p0, boolean p1)
    {
      this.originalRequest = p0;
      this.startLoading(p0, p1, 0);
    }

}
