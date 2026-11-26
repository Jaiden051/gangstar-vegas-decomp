// Decompiled from classes.dex (SourceFile: PickerFragment$PickerFragmentAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

abstract class PickerFragment$PickerFragmentAdapter<T extends com.facebook.model.GraphObject> extends com.facebook.widget.GraphObjectAdapter<T> {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    public PickerFragment$PickerFragmentAdapter(com.facebook.widget.PickerFragment p0, android.content.Context p1)
    {
      super(p1);
      this.this$0 = p0;
    
    }

    boolean isGraphObjectSelected(String p0)
    {
      return PickerFragment.access$700(this.this$0).isSelected(p0);
    }

    void updateCheckboxState(android.widget.CheckBox p0, boolean p1)
    {
      int v3;
      p0.setChecked(p1);
      if ( p1 || PickerFragment.access$700(this.this$0).shouldShowCheckBoxIfUnselected() )
        v3 = 0;
      else
        v3 = 8;
      p0.setVisibility(v3);
    }

}
