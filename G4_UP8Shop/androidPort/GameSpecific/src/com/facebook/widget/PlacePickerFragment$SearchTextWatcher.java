// Decompiled from classes.dex (SourceFile: PlacePickerFragment$SearchTextWatcher.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PlacePickerFragment$SearchTextWatcher implements android.text.TextWatcher {
    // Fields
    final com.facebook.widget.PlacePickerFragment this$0;

    // Methods
    private PlacePickerFragment$SearchTextWatcher(com.facebook.widget.PlacePickerFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ PlacePickerFragment$SearchTextWatcher(
            com.facebook.widget.PlacePickerFragment p0,
            com.facebook.widget.PlacePickerFragment$1 p1)
    {
      this(p0);
    }

    public void afterTextChanged(android.text.Editable p0)
    {
      ;
    }

    public void beforeTextChanged(CharSequence p0, int p1, int p2, int p3)
    {
      ;
    }

    public void onTextChanged(CharSequence p0, int p1, int p2, int p3)
    {
      this.this$0.onSearchBoxTextChanged(p0.toString(), false);
    }

}
