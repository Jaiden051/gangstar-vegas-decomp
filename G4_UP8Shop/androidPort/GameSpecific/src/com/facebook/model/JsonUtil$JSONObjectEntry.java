// Decompiled from classes.dex (SourceFile: JsonUtil$JSONObjectEntry.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

final class JsonUtil$JSONObjectEntry implements java.util.Map.Entry {
    // Fields
    private final java.lang.String key;
    private final java.lang.Object value;

    // Methods
    JsonUtil$JSONObjectEntry(String p0, Object p1)
    {
      super();
      this.key = p0;
      this.value = p1;
    }



    public final String getKey()
    {
      return this.key;
    }

    public final Object getValue()
    {
      return this.value;
    }

    public final Object setValue(Object p0)
    {
      throw new UnsupportedOperationException("JSONObjectEntry is immutable");
    }

}
