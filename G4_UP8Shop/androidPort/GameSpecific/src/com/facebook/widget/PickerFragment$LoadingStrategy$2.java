// Decompiled from classes.dex (SourceFile: PickerFragment$LoadingStrategy$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$LoadingStrategy$2 implements com.facebook.widget.GraphObjectPagingLoader$OnErrorListener {
    // Fields
    final com.facebook.widget.PickerFragment$LoadingStrategy this$1;

    // Methods
    PickerFragment$LoadingStrategy$2(com.facebook.widget.PickerFragment$LoadingStrategy p0)
    {
      super();
      this.this$1 = p0;
    
    }

    public void onError(
            com.facebook.FacebookException p0,
            com.facebook.widget.GraphObjectPagingLoader<?> p1)
    {
      this.this$1.this$0.hideActivityCircle();
      if ( PickerFragment.access$500(this.this$1.this$0) != null )
        PickerFragment.access$500(this.this$1.this$0).onError(this.this$1.this$0, p0);
    }

}
