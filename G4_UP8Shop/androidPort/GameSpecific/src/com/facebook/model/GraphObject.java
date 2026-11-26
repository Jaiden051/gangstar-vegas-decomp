// Decompiled from classes.dex (SourceFile: GraphObject.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface GraphObject {
    // Methods
    public abstract java.util.Map asMap();

    public abstract com.facebook.model.GraphObject cast(java.lang.Class p0);

    public abstract org.json.JSONObject getInnerJSONObject();

    public abstract java.lang.Object getProperty(java.lang.String p0);

    public abstract com.facebook.model.GraphObject getPropertyAs(java.lang.String p0, java.lang.Class p1);

    public abstract com.facebook.model.GraphObjectList getPropertyAsList(java.lang.String p0, java.lang.Class p1);

    public abstract void removeProperty(java.lang.String p0);

    public abstract void setProperty(java.lang.String p0, java.lang.Object p1);

}
