// Decompiled from classes.dex (SourceFile: DefaultMediaPicker$AreaComparator.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

class DefaultMediaPicker$AreaComparator implements java.util.Comparator {
    // Fields
    final com.gameloft.glads.vast.util.DefaultMediaPicker a;

    // Methods
    private DefaultMediaPicker$AreaComparator(com.gameloft.glads.vast.util.DefaultMediaPicker p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ DefaultMediaPicker$AreaComparator(com.gameloft.glads.vast.util.DefaultMediaPicker p0, int p1)
    {
      this(p0);
    }

    public int compare(
            com.gameloft.glads.vast.model.VASTMediaFile p0,
            com.gameloft.glads.vast.model.VASTMediaFile p1)
    {
      int v3;
      int v4;
      int v5;
      int v6;
      v3 = p0.getWidth().intValue() * p0.getHeight().intValue();
      v4 = p1.getWidth().intValue() * p1.getHeight().intValue();
      v5 = Math.abs(v3 - DefaultMediaPicker.access$100(this.a));
      v6 = Math.abs(v4 - DefaultMediaPicker.access$100(this.a));
      VASTLog.v("DefaultMediaPicker", "AreaComparator: obj1:" + v5 + " obj2:" + v6);
      if ( v5 >= v6 )
        return v5 > v6 ? 1 : 0;
      else
        return -1;
    }

    /* bridge */ public int compare(Object p0, Object p1)
    {
      return this.compare/* int */((com.gameloft.glads.vast.model.VASTMediaFile)p0, (com.gameloft.glads.vast.model.VASTMediaFile)p1);
    }

}
