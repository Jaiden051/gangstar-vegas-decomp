// Decompiled from classes.dex (SourceFile: FriendPickerFragment$ImmediateLoadingStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class FriendPickerFragment$ImmediateLoadingStrategy extends com.facebook.widget.PickerFragment$LoadingStrategy<com.facebook.model.GraphUser> {
    // Fields
    final com.facebook.widget.FriendPickerFragment this$0;

    // Methods
    private FriendPickerFragment$ImmediateLoadingStrategy(com.facebook.widget.FriendPickerFragment p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    /* synthetic */ FriendPickerFragment$ImmediateLoadingStrategy(
            com.facebook.widget.FriendPickerFragment p0,
            com.facebook.widget.FriendPickerFragment$1 p1)
    {
      this(p0);
    }

    private void followNextLink()
    {
      this.this$0.displayActivityCircle();
      this.loader.followNextLink();
    }

    protected boolean canSkipRoundTripIfCached()
    {
      return FriendPickerFragment.access$100(this.this$0).isCacheable();
    }

    protected void onLoadFinished(
            com.facebook.widget.GraphObjectPagingLoader<com.facebook.model.GraphUser> p0,
            com.facebook.widget.SimpleGraphObjectCursor<com.facebook.model.GraphUser> p1)
    {
      long v3;
      super.onLoadFinished(p0, p1);
      if ( p1 != null && !p0.isLoading() )
      {
        if ( p1.areMoreObjectsAvailable() )
        {
          this.followNextLink();
        }
        else
        {
          this.this$0.hideActivityCircle();
          if ( p1.isFromCache() )
          {
            if ( p1.getCount() != 0 )
              v3 = 0;
            else
              v3 = 2000;
            p0.refreshOriginalRequest(v3);
          }
        }
      }
    }

}
