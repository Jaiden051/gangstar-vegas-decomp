// Decompiled from classes.dex (SourceFile: FriendPickerFragment$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class FriendPickerFragment$1 extends com.facebook.widget.PickerFragment$PickerFragmentAdapter {
    // Fields
    final com.facebook.widget.FriendPickerFragment this$0;

    // Methods
    FriendPickerFragment$1(com.facebook.widget.FriendPickerFragment p0, android.content.Context p1)
    {
      super(p0, p1);
      this.this$0 = p0;
    
    }

    protected int getDefaultPicture()
    {
      return 2130837550;
    }

    /* bridge */ protected int getGraphObjectRowLayoutId(com.facebook.model.GraphObject p0)
    {
      return this.getGraphObjectRowLayoutId/* int */((com.facebook.model.GraphUser)p0);
    }

    protected int getGraphObjectRowLayoutId(com.facebook.model.GraphUser p0)
    {
      return 6;
    }

}
