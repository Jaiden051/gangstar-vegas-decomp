// Decompiled from classes.dex (SourceFile: PickerFragment$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PickerFragment$2 implements android.widget.AdapterView.OnItemClickListener {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$2(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onItemClick(android.widget.AdapterView<?> p0, android.view.View p1, int p2, long p3)
    {
      PickerFragment.access$000(this.this$0, (android.widget.ListView)p0, p1, p2);
    }

}
