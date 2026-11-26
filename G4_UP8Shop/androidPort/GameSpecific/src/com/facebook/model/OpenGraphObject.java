// Decompiled from classes.dex (SourceFile: OpenGraphObject.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

public interface OpenGraphObject extends com.facebook.model.GraphObject {
    // Methods
    public abstract com.facebook.model.GraphObject getApplication();

    public abstract com.facebook.model.GraphObjectList getAudio();

    public abstract boolean getCreateObject();

    public abstract java.util.Date getCreatedTime();

    public abstract com.facebook.model.GraphObject getData();

    public abstract java.lang.String getDescription();

    public abstract java.lang.String getDeterminer();

    public abstract java.lang.String getId();

    public abstract com.facebook.model.GraphObjectList getImage();

    public abstract boolean getIsScraped();

    public abstract java.lang.String getPostActionId();

    public abstract java.util.List getSeeAlso();

    public abstract java.lang.String getSiteName();

    public abstract java.lang.String getTitle();

    public abstract java.lang.String getType();

    public abstract java.util.Date getUpdatedTime();

    public abstract java.lang.String getUrl();

    public abstract com.facebook.model.GraphObjectList getVideo();

    public abstract void setApplication(com.facebook.model.GraphObject p0);

    public abstract void setAudio(com.facebook.model.GraphObjectList p0);

    public abstract void setCreateObject(boolean p0);

    public abstract void setCreatedTime(java.util.Date p0);

    public abstract void setData(com.facebook.model.GraphObject p0);

    public abstract void setDescription(java.lang.String p0);

    public abstract void setDeterminer(java.lang.String p0);

    public abstract void setId(java.lang.String p0);

    public abstract void setImage(com.facebook.model.GraphObjectList p0);

    public abstract void setImageUrls(java.util.List p0);

    public abstract void setIsScraped(boolean p0);

    public abstract void setPostActionId(java.lang.String p0);

    public abstract void setSeeAlso(java.util.List p0);

    public abstract void setSiteName(java.lang.String p0);

    public abstract void setTitle(java.lang.String p0);

    public abstract void setType(java.lang.String p0);

    public abstract void setUpdatedTime(java.util.Date p0);

    public abstract void setUrl(java.lang.String p0);

    public abstract void setVideo(com.facebook.model.GraphObjectList p0);

}
