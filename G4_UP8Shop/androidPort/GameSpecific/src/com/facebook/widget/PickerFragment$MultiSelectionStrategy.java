// Decompiled from classes.dex (SourceFile: PickerFragment$MultiSelectionStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import android.text.TextUtils;
import java.util.Collections;
class PickerFragment$MultiSelectionStrategy extends com.facebook.widget.PickerFragment$SelectionStrategy {
    // Fields
    private java.util.Set selectedIds;
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$MultiSelectionStrategy(com.facebook.widget.PickerFragment p0)
    {
      super(p0);
      this.this$0 = p0;
      this.selectedIds = new java.util.HashSet();
    
    }

    public void clear()
    {
      this.selectedIds.clear();
    }

    public java.util.Collection<String> getSelectedIds()
    {
      return this.selectedIds;
    }

    boolean isEmpty()
    {
      return this.selectedIds.isEmpty();
    }

    boolean isSelected(String p0)
    {
      return p0 != null && this.selectedIds.contains(p0);
    }

    void readSelectionFromBundle(android.os.Bundle p0, String p1)
    {
      String String; // RETVAL
      String[] v4; // RETVAL
    
      if ( p0 != null )
      {
        String = p0.getString(p1);
        if ( String != null )
        {
          v4 = TextUtils.split(String, ",");
          this.selectedIds.clear();
          Collections.addAll(this.selectedIds, v4);
        }
      }
    }

    void saveSelectionToBundle(android.os.Bundle p0, String p1)
    {
      if ( !this.selectedIds.isEmpty() )
        p0.putString(p1, TextUtils.join(",", this.selectedIds));
    }

    boolean shouldShowCheckBoxIfUnselected()
    {
      return true;
    }

    void toggleSelection(String p0)
    {
      if ( p0 != null )
      {
        if ( this.selectedIds.contains(p0) )
          this.selectedIds.remove(p0);
        else
          this.selectedIds.add(p0);
      }
    }

}
