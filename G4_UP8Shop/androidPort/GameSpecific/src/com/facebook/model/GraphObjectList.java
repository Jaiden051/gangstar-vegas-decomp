// Decompiled from classes.dex (SourceFile: GraphObjectList.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface GraphObjectList<T> extends java.util.List<T> {
    // Methods
    public abstract <U extends com.facebook.model.GraphObject> com.facebook.model.GraphObjectList<U> castToListOf(Class<U> p0);

    public abstract org.json.JSONArray getInnerJSONArray();

}
