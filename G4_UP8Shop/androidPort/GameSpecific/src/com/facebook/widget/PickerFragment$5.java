// Decompiled from classes.dex (SourceFile: PickerFragment$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$5 implements android.view.View.OnClickListener {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$5(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onClick(android.view.View p0)
    {
      this.this$0.logAppEvents(true);
      PickerFragment.access$202(this.this$0, true);
      if ( PickerFragment.access$300(this.this$0) != null )
        PickerFragment.access$300(this.this$0).onDoneButtonClicked(this.this$0);
    }

}
