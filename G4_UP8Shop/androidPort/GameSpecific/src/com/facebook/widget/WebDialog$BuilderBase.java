// Decompiled from classes.dex (SourceFile: WebDialog$BuilderBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

import com.facebook.Session;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
class WebDialog$BuilderBase<CONCRETE extends com.facebook.widget.WebDialog$BuilderBase<?>> {
    // Fields
    private java.lang.String action;
    private java.lang.String applicationId;
    private android.content.Context context;
    private com.facebook.widget.WebDialog$OnCompleteListener listener;
    private android.os.Bundle parameters;
    private com.facebook.Session session;
    private int theme;

    // Methods
    protected WebDialog$BuilderBase(android.content.Context p0, com.facebook.Session p1, String p2, android.os.Bundle p3)
    {
      super();
      this.theme = 16973840;
      Validate.notNull(p1, "session");
      if ( !p1.isOpened() )
        throw new com.facebook.FacebookException("Attempted to use a Session that was not open.");
      this.session = p1;
      this.finishInit(p0, p2, p3);
    }

    protected WebDialog$BuilderBase(android.content.Context p0, String p1)
    {
      super();
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v4;
      String MetadataApplicationId; // RETVAL
      this.theme = 16973840;
      ActiveSession = Session.getActiveSession();
      v4 = ActiveSession;
      if ( ActiveSession != null && ActiveSession.isOpened() )
      {
        this.session = v4;
      }
      else
      {
        MetadataApplicationId = Utility.getMetadataApplicationId(p0);
        if ( MetadataApplicationId == null )
          throw new com.facebook.FacebookException("Attempted to create a builder without an open Active Session or a valid d" +
                                                   "efault Application ID.");
        this.applicationId = MetadataApplicationId;
      }
      this.finishInit(p0, p1, null);
    
    }

    protected WebDialog$BuilderBase(android.content.Context p0, String p1, String p2, android.os.Bundle p3)
    {
      super();
      this.theme = 16973840;
      if ( p1 == null )
        p1 = Utility.getMetadataApplicationId(p0);
      Validate.notNullOrEmpty(p1, "applicationId");
      this.applicationId = p1;
      this.finishInit(p0, p2, p3);
    }

    private void finishInit(android.content.Context p0, String p1, android.os.Bundle p2)
    {
      this.context = p0;
      this.action = p1;
      if ( p2 != null )
        this.parameters = p2;
      else
        this.parameters = new android.os.Bundle();
    }

    public com.facebook.widget.WebDialog build()
    {
      if ( this.session != null && this.session.isOpened() )
      {
        this.parameters.putString("app_id", this.session.getApplicationId());
        this.parameters.putString("access_token", this.session.getAccessToken());
      }
      else
      {
        this.parameters.putString("app_id", this.applicationId);
      }
      return new com.facebook.widget.WebDialog(this.context, this.action, this.parameters, this.theme, this.listener);
    }

    protected String getApplicationId()
    {
      return this.applicationId;
    }

    protected android.content.Context getContext()
    {
      return this.context;
    }

    protected com.facebook.widget.WebDialog$OnCompleteListener getListener()
    {
      return this.listener;
    }

    protected android.os.Bundle getParameters()
    {
      return this.parameters;
    }

    protected int getTheme()
    {
      return this.theme;
    }

    public CONCRETE setOnCompleteListener(com.facebook.widget.WebDialog$OnCompleteListener p0)
    {
      this.listener = p0;
      return (CONCRETE)this;
    }

    public CONCRETE setTheme(int p0)
    {
      this.theme = p0;
      return (CONCRETE)this;
    }

}
