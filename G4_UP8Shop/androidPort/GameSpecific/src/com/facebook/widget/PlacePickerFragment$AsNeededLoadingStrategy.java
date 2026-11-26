// Decompiled from classes.dex (SourceFile: PlacePickerFragment$AsNeededLoadingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PlacePickerFragment$AsNeededLoadingStrategy extends com.facebook.widget.PickerFragment$LoadingStrategy<com.facebook.model.GraphPlace> {
    // Fields
    final com.facebook.widget.PlacePickerFragment this$0;

    // Methods
    private PlacePickerFragment$AsNeededLoadingStrategy(com.facebook.widget.PlacePickerFragment p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    /* synthetic */ PlacePickerFragment$AsNeededLoadingStrategy(
            com.facebook.widget.PlacePickerFragment p0,
            com.facebook.widget.PlacePickerFragment$1 p1)
    {
      this(p0);
    }

    public void attach(
            com.facebook.widget.GraphObjectAdapter<com.facebook.model.GraphPlace> p0)
    {
      super.attach(p0);
      this.adapter.setDataNeededListener((com.facebook.widget.GraphObjectAdapter$DataNeededListener)new com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy$1(this));
    }

    protected void onLoadFinished(
            com.facebook.widget.GraphObjectPagingLoader<com.facebook.model.GraphPlace> p0,
            com.facebook.widget.SimpleGraphObjectCursor<com.facebook.model.GraphPlace> p1)
    {
      long v3;
      super.onLoadFinished(p0, p1);
      if ( p1 != null && !p0.isLoading() )
      {
        this.this$0.hideActivityCircle();
        if ( p1.isFromCache() )
        {
          if ( p1.areMoreObjectsAvailable() )
            v3 = 2000;
          else
            v3 = 0;
          p0.refreshOriginalRequest(v3);
        }
      }
    }

}
