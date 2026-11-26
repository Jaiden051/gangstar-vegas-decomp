// Decompiled from classes.dex (SourceFile: PickerFragment$SelectionStrategy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

abstract class PickerFragment$SelectionStrategy {
    // Fields
    final com.facebook.widget.PickerFragment this$0;

    // Methods
    PickerFragment$SelectionStrategy(com.facebook.widget.PickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    abstract void clear();

    abstract java.util.Collection getSelectedIds();

    abstract boolean isEmpty();

    abstract boolean isSelected(java.lang.String p0);

    abstract void readSelectionFromBundle(android.os.Bundle p0, java.lang.String p1);

    abstract void saveSelectionToBundle(android.os.Bundle p0, java.lang.String p1);

    abstract boolean shouldShowCheckBoxIfUnselected();

    abstract void toggleSelection(java.lang.String p0);

}
