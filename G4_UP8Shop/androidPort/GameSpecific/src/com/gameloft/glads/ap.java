// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ap implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.MRAIDBanner b;

    // Methods
    ap(String p0, com.gameloft.glads.MRAIDBanner p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      if ( !MRAIDBanner.access$200() )
        MRAIDBanner.access$300();
      MRAIDBanner.access$402(null);
      MRAIDBanner.access$002(
        new com.gameloft.glads.mraid.MRAIDView(GLAds.getParentView().getContext(), null, this.a, MRAIDBanner.access$500(), (com.gameloft.glads.mraid.MRAIDViewListener)this.b, (com.gameloft.glads.mraid.MRAIDNativeFeatureListener)this.b));
      MRAIDBanner.access$000().setLayoutParams(MRAIDBanner.access$100());
      GLAds.getParentView().addView(MRAIDBanner.access$000());
    }

}
