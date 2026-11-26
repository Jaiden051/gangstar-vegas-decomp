// Decompiled from classes.dex (SourceFile: FacebookDialog$ShareDialogBuilderBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.internal.Utility;
abstract class FacebookDialog$ShareDialogBuilderBase<CONCRETE extends com.facebook.widget.FacebookDialog$ShareDialogBuilderBase<?>> extends com.facebook.widget.FacebookDialog$Builder<CONCRETE> {
    // Fields
    private java.lang.String caption;
    private boolean dataErrorsFatal;
    private java.lang.String description;
    private java.util.ArrayList friends;
    protected java.lang.String link;
    private java.lang.String name;
    private java.lang.String picture;
    private java.lang.String place;
    private java.lang.String ref;

    // Methods
    public FacebookDialog$ShareDialogBuilderBase(android.app.Activity p0)
    {
      super(p0);
    }

    protected android.os.Bundle getMethodArguments()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      this.putExtra(v1, "TITLE", this.name);
      this.putExtra(v1, "SUBTITLE", this.caption);
      this.putExtra(v1, "DESCRIPTION", this.description);
      this.putExtra(v1, "LINK", this.link);
      this.putExtra(v1, "IMAGE", this.picture);
      this.putExtra(v1, "PLACE", this.place);
      this.putExtra(v1, "REF", this.ref);
      v1.putBoolean("DATA_FAILURES_FATAL", this.dataErrorsFatal);
      if ( !Utility.isNullOrEmpty(this.friends) )
        v1.putStringArrayList("FRIENDS", this.friends);
      return v1;
    }

    protected android.os.Bundle setBundleExtras(android.os.Bundle p0)
    {
      this.putExtra(p0, "com.facebook.platform.extra.APPLICATION_ID", this.applicationId);
      this.putExtra(p0, "com.facebook.platform.extra.APPLICATION_NAME", this.applicationName);
      this.putExtra(p0, "com.facebook.platform.extra.TITLE", this.name);
      this.putExtra(p0, "com.facebook.platform.extra.SUBTITLE", this.caption);
      this.putExtra(p0, "com.facebook.platform.extra.DESCRIPTION", this.description);
      this.putExtra(p0, "com.facebook.platform.extra.LINK", this.link);
      this.putExtra(p0, "com.facebook.platform.extra.IMAGE", this.picture);
      this.putExtra(p0, "com.facebook.platform.extra.PLACE", this.place);
      this.putExtra(p0, "com.facebook.platform.extra.REF", this.ref);
      p0.putBoolean("com.facebook.platform.extra.DATA_FAILURES_FATAL", this.dataErrorsFatal);
      if ( !Utility.isNullOrEmpty(this.friends) )
        p0.putStringArrayList("com.facebook.platform.extra.FRIENDS", this.friends);
      return p0;
    }

    public CONCRETE setCaption(String p0)
    {
      this.caption = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setDataErrorsFatal(boolean p0)
    {
      this.dataErrorsFatal = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setDescription(String p0)
    {
      this.description = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setFriends(java.util.List<String> p0)
    {
      java.util.ArrayList v2;
      if ( p0 != null )
        v2 = new java.util.ArrayList(p0);
      else
        v2 = null;
      this.friends = v2;
      return (CONCRETE)this;
    }

    public CONCRETE setLink(String p0)
    {
      this.link = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setName(String p0)
    {
      this.name = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setPicture(String p0)
    {
      this.picture = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setPlace(String p0)
    {
      this.place = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setRef(String p0)
    {
      this.ref = p0;
      return (CONCRETE)this;
    }

}
