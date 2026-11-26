// Decompiled from classes.dex (SourceFile: PlacePickerFragment$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class PlacePickerFragment$1 extends com.facebook.widget.PickerFragment$PickerFragmentAdapter {
    // Fields
    final com.facebook.widget.PlacePickerFragment this$0;

    // Methods
    PlacePickerFragment$1(com.facebook.widget.PlacePickerFragment p0, android.content.Context p1)
    {
      super(p0, p1);
      this.this$0 = p0;
    
    }

    protected int getDefaultPicture()
    {
      return 2130837549;
    }

    /* bridge */ protected int getGraphObjectRowLayoutId(com.facebook.model.GraphObject p0)
    {
      return this.getGraphObjectRowLayoutId/* int */((com.facebook.model.GraphPlace)p0);
    }

    protected int getGraphObjectRowLayoutId(com.facebook.model.GraphPlace p0)
    {
      return 2130903052;
    }

    /* bridge */ protected CharSequence getSubTitleOfGraphObject(com.facebook.model.GraphObject p0)
    {
      return this.getSubTitleOfGraphObject/* CharSequence */((com.facebook.model.GraphPlace)p0);
    }

    protected CharSequence getSubTitleOfGraphObject(com.facebook.model.GraphPlace p0)
    {
      String Category;
      Integer v3;
      Object[] v4;
      Object[] v7;
      Object[] v8;
      Category = p0.getCategory();
      v3 = (Integer)p0.getProperty("were_here_count");
      if ( Category != null && v3 != null )
      {
        v4 = new Object[2];
        v4[0] = Category;
        v4[1] = v3;
        return this.this$0.getString(2131165508, v4);
      }
      else if ( Category != null || v3 == null )
      {
        if ( Category == null || v3 != null )
        {
          return null;
        }
        else
        {
          v8 = new Object[1];
          v8[0] = Category;
          return this.this$0.getString(2131165509, v8);
        }
      }
      else
      {
        v7 = new Object[1];
        v7[0] = v3;
        return this.this$0.getString(2131165510, v7);
      }
    }

}
