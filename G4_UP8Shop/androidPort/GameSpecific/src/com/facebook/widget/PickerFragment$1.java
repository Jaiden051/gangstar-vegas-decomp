// Decompiled from classes.dex (SourceFile: PickerFragment$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$1<T> implements com.facebook.widget.GraphObjectAdapter$Filter<T> {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$1(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public boolean includeItem(T p0)
    {
      return this.this$0.filterIncludesItem(p0);
    }



}
