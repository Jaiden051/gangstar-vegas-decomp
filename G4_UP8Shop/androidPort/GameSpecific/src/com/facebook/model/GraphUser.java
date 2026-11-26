// Decompiled from classes.dex (SourceFile: GraphUser.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface GraphUser extends com.facebook.model.GraphObject {
    // Methods
    public abstract java.lang.String getBirthday();

    public abstract java.lang.String getFirstName();

    public abstract java.lang.String getId();

    public abstract java.lang.String getLastName();

    public abstract java.lang.String getLink();

    public abstract com.facebook.model.GraphPlace getLocation();

    public abstract java.lang.String getMiddleName();

    public abstract java.lang.String getName();

    public abstract java.lang.String getUsername();

    public abstract void setBirthday(java.lang.String p0);

    public abstract void setFirstName(java.lang.String p0);

    public abstract void setId(java.lang.String p0);

    public abstract void setLastName(java.lang.String p0);

    public abstract void setLink(java.lang.String p0);

    public abstract void setLocation(com.facebook.model.GraphPlace p0);

    public abstract void setMiddleName(java.lang.String p0);

    public abstract void setName(java.lang.String p0);

    public abstract void setUsername(java.lang.String p0);

}
