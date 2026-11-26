// Decompiled from classes.dex (SourceFile: PickerFragment$SingleSelectionStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.text.TextUtils;
import java.util.Arrays;
class PickerFragment$SingleSelectionStrategy extends com.facebook.widget.PickerFragment$SelectionStrategy {
    // Fields
    private java.lang.String selectedId;
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$SingleSelectionStrategy(com.facebook.widget.PickerFragment p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    public void clear()
    {
      this.selectedId = null;
    }

    public java.util.Collection<String> getSelectedIds()
    {
      String[] v1;
      v1 = new String[1];
      v1[0] = this.selectedId;
      return Arrays.asList(v1);
    }

    boolean isEmpty()
    {
      return this.selectedId == null;
    }

    boolean isSelected(String p0)
    {
      return this.selectedId != null && p0 != null && this.selectedId.equals(p0);
    }

    void readSelectionFromBundle(android.os.Bundle p0, String p1)
    {
      if ( p0 != null )
        this.selectedId = p0.getString(p1);
    }

    void saveSelectionToBundle(android.os.Bundle p0, String p1)
    {
      if ( !TextUtils.isEmpty(this.selectedId) )
        p0.putString(p1, this.selectedId);
    }

    boolean shouldShowCheckBoxIfUnselected()
    {
      return false;
    }

    void toggleSelection(String p0)
    {
      if ( this.selectedId != null && this.selectedId.equals(p0) )
        this.selectedId = null;
      else
        this.selectedId = p0;
    }

}
