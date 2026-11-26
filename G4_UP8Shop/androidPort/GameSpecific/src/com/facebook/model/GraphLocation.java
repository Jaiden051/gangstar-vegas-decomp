// Decompiled from classes.dex (SourceFile: GraphLocation.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface GraphLocation extends com.facebook.model.GraphObject {
    // Methods
    public abstract java.lang.String getCity();

    public abstract java.lang.String getCountry();

    public abstract double getLatitude();

    public abstract double getLongitude();

    public abstract java.lang.String getState();

    public abstract java.lang.String getStreet();

    public abstract java.lang.String getZip();

    public abstract void setCity(java.lang.String p0);

    public abstract void setCountry(java.lang.String p0);

    public abstract void setLatitude(double p0);

    public abstract void setLongitude(double p0);

    public abstract void setState(java.lang.String p0);

    public abstract void setStreet(java.lang.String p0);

    public abstract void setZip(java.lang.String p0);

}
