// Decompiled from classes.dex (SourceFile: PlacePickerFragment$AsNeededLoadingStrategy$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PlacePickerFragment$AsNeededLoadingStrategy$1 implements com.facebook.widget.GraphObjectAdapter$DataNeededListener {
    // Fields
    final com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy this$1;

    // Methods
    PlacePickerFragment$AsNeededLoadingStrategy$1(com.facebook.widget.PlacePickerFragment$AsNeededLoadingStrategy p0)
    {
      super();
      this.this$1 = p0;
    
    }

    public void onDataNeeded()
    {
      if ( !this.this$1.loader.isLoading() )
        this.this$1.loader.followNextLink();
    }

}
