// Decompiled from classes.dex (SourceFile: PickerFragment$LoadingStrategy$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$LoadingStrategy$3 implements com.facebook.widget.GraphObjectAdapter$OnErrorListener {
    // Fields
    final com.facebook.widget.PickerFragment$LoadingStrategy this$1;

    // Methods
    PickerFragment$LoadingStrategy$3(com.facebook.widget.PickerFragment$LoadingStrategy p0)
    {
      super();
      this.this$1 = p0;
    
    }

    public void onError(
            com.facebook.widget.GraphObjectAdapter<?> p0,
            com.facebook.FacebookException p1)
    {
      if ( PickerFragment.access$500(this.this$1.this$0) != null )
        PickerFragment.access$500(this.this$1.this$0).onError(this.this$1.this$0, p1);
    }

}
