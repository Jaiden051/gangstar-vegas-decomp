// Decompiled from classes.dex (SourceFile: OpenGraphAction.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface OpenGraphAction extends com.facebook.model.GraphObject {
    // Methods
    public abstract com.facebook.model.GraphObject getApplication();

    public abstract org.json.JSONObject getComments();

    public abstract java.util.Date getCreatedTime();

    public abstract com.facebook.model.GraphObject getData();

    public abstract java.util.Date getEndTime();

    public abstract java.util.Date getExpiresTime();

    public abstract boolean getExplicitlyShared();

    public abstract com.facebook.model.GraphUser getFrom();

    public abstract java.lang.String getId();

    public abstract java.util.List getImage();

    public abstract org.json.JSONObject getLikes();

    public abstract java.lang.String getMessage();

    public abstract com.facebook.model.GraphPlace getPlace();

    public abstract java.util.Date getPublishTime();

    public abstract java.lang.String getRef();

    public abstract java.util.Date getStartTime();

    public abstract com.facebook.model.GraphObjectList getTags();

    public abstract java.lang.String getType();

    public abstract void setApplication(com.facebook.model.GraphObject p0);

    public abstract void setComments(org.json.JSONObject p0);

    public abstract void setCreatedTime(java.util.Date p0);

    public abstract void setData(com.facebook.model.GraphObject p0);

    public abstract void setEndTime(java.util.Date p0);

    public abstract void setExpiresTime(java.util.Date p0);

    public abstract void setExplicitlyShared(boolean p0);

    public abstract void setFrom(com.facebook.model.GraphUser p0);

    public abstract void setId(java.lang.String p0);

    public abstract void setImage(java.util.List p0);

    public abstract void setImageUrls(java.util.List p0);

    public abstract void setLikes(org.json.JSONObject p0);

    public abstract void setMessage(java.lang.String p0);

    public abstract void setPlace(com.facebook.model.GraphPlace p0);

    public abstract void setPublishTime(java.util.Date p0);

    public abstract void setRef(java.lang.String p0);

    public abstract void setStartTime(java.util.Date p0);

    public abstract void setTags(java.util.List p0);

    public abstract void setType(java.lang.String p0);

}
