// Decompiled from classes.dex (SourceFile: PickerFragment$LoadingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

abstract class PickerFragment$LoadingStrategy<T extends com.facebook.model.GraphObject> {
    // Fields
    protected static int CACHED_RESULT_REFRESH_DELAY;
    protected com.facebook.widget.GraphObjectAdapter adapter;
    protected com.facebook.widget.GraphObjectPagingLoader loader;
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$LoadingStrategy(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void attach(com.facebook.widget.GraphObjectAdapter<T> p0)
    {
      this.loader = (com.facebook.widget.GraphObjectPagingLoader)this.this$0.getLoaderManager().a(0, null, (android.support.v4.app.af)new com.facebook.widget.PickerFragment$LoadingStrategy$1(this));
      this.loader.setOnErrorListener((com.facebook.widget.GraphObjectPagingLoader$OnErrorListener)new com.facebook.widget.PickerFragment$LoadingStrategy$2(this));
      this.adapter = p0;
      this.adapter.changeCursor((com.facebook.widget.GraphObjectCursor)this.loader.getCursor());
      this.adapter.setOnErrorListener((com.facebook.widget.GraphObjectAdapter$OnErrorListener)new com.facebook.widget.PickerFragment$LoadingStrategy$3(this));
    }

    protected boolean canSkipRoundTripIfCached()
    {
      return true;
    }

    public void clearResults()
    {
      if ( this.loader != null )
        this.loader.clearResults();
    }

    public void detach()
    {
      this.adapter.setDataNeededListener(null);
      this.adapter.setOnErrorListener(null);
      this.loader.setOnErrorListener(null);
      this.loader = null;
      this.adapter = null;
    }

    public boolean isDataPresentOrLoading()
    {
      return !this.adapter.isEmpty() || this.loader.isLoading();
    }

    protected com.facebook.widget.GraphObjectPagingLoader<T> onCreateLoader()
    {
      return new com.facebook.widget.GraphObjectPagingLoader(this.this$0.getActivity(), PickerFragment.access$600(this.this$0));
    }

    protected void onLoadFinished(
            com.facebook.widget.GraphObjectPagingLoader<T> p0,
            com.facebook.widget.SimpleGraphObjectCursor<T> p1)
    {
      this.this$0.updateAdapter(p1);
    }

    protected void onLoadReset(com.facebook.widget.GraphObjectPagingLoader<T> p0)
    {
      this.adapter.changeCursor(null);
    }

    protected void onStartLoading(
            com.facebook.widget.GraphObjectPagingLoader<T> p0,
            com.facebook.Request p1)
    {
      this.this$0.displayActivityCircle();
    }

    public void startLoading(com.facebook.Request p0)
    {
      if ( this.loader != null )
      {
        this.loader.startLoading(p0, this.canSkipRoundTripIfCached());
        this.onStartLoading(this.loader, p0);
      }
    }

}
