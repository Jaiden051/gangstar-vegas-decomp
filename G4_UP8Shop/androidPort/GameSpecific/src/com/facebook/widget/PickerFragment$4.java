// Decompiled from classes.dex (SourceFile: PickerFragment$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$4 implements com.facebook.Session$StatusCallback {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$4(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void call(com.facebook.Session p0, com.facebook.SessionState p1, Exception p2)
    {
      if ( !p0.isOpened() )
        PickerFragment.access$100(this.this$0);
    }

}
