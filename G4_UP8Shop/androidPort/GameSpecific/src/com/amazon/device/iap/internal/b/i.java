// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal.b;

import com.amazon.android.Kiwi;
public abstract class i extends com.amazon.android.framework.task.command.AbstractCommandTask {
    // Fields
    private static final java.lang.String a;
    private final com.amazon.device.iap.internal.b.b_e b;
    private final java.lang.String c;
    private final java.lang.String d;
    private final java.lang.String e;
    private final java.util.Map f;
    private final com.amazon.android.licensing.LicenseFailurePromptContentMapper g;
    private boolean h;
    private com.amazon.device.iap.internal.b.i i;
    private com.amazon.device.iap.internal.b.i j;
    private boolean k;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.b.i.class.getSimpleName();
    }

    public i(com.amazon.device.iap.internal.b.b_e p0, String p1, String p2)
    {
      super();
      this.g = new com.amazon.android.licensing.LicenseFailurePromptContentMapper();
      this.k = false;
      this.b = p0;
      this.c = p0.c().toString();
      this.d = p1;
      this.e = p2;
      this.f = new java.util.HashMap();
      this.f.put("requestId", this.c);
      this.f.put("sdkVersion", "2.0.0");
      this.h = true;
      this.i = null;
      this.j = null;
    }

    private void a(com.amazon.android.framework.prompt.PromptContent p0)
    {
      if ( p0 != null )
        Kiwi.getPromptManager().present(new com.amazon.device.iap.internal.b.b_b(p0));
    }

    public com.amazon.device.iap.internal.b.i a(boolean p0)
    {
      this.k = p0;
      return this;
    }

    public void a(com.amazon.device.iap.internal.b.i p0)
    {
      this.i = p0;
    }

    protected void a(String p0, Object p1)
    {
      this.f.put(p0, p1);
    }

    protected abstract boolean a(com.amazon.venezia.command.SuccessResult p0) throws org.json.JSONException;

    public void a_()
    {
      Kiwi.addCommandToCommandTaskPipeline(this);
    }

    protected com.amazon.device.iap.internal.b.b_e b()
    {
      return this.b;
    }

    public void b(com.amazon.device.iap.internal.b.i p0)
    {
      this.j = p0;
    }

    protected void b(boolean p0)
    {
      this.h = p0;
    }

    protected String c()
    {
      return this.c;
    }

    protected java.util.Map<String, Object> getCommandData()
    {
      return this.f;
    }

    protected String getCommandName()
    {
      return this.d;
    }

    protected String getCommandVersion()
    {
      return this.e;
    }

    protected boolean isExecutionNeeded()
    {
      return true;
    }

    protected final void onException(com.amazon.android.framework.exception.KiwiException p0)
 {
      com.amazon.device.iap.internal.util.e.a(a, "onException: exception = " + p0.getMessage());
      if ( "UNHANDLED_EXCEPTION".equals(p0.getType()) && "2.0".equals(this.e) && this.j != null )
      {
        this.j.a(this.k);
        this.j.a_();
      }
      else
      {
        if ( this.h )
          this.a(this.g.map(p0));
        if ( !this.k )
          this.b.b();
      }
    }

    protected final void onFailure(com.amazon.venezia.command.FailureResult p0)
 {
      String v2;
      boolean v3;
      com.amazon.device.iap.internal.util.e.a(a, "onFailure: result = " + p0);
      v3 = false;
      if ( p0 != null )
      {
        v2 = (String)p0.getExtensionData().get("maxVersion");
        if ( v2 != null && v2.equalsIgnoreCase("1.0") )
          v3 = true;
      }
      if ( v3 && this.j != null )
      {
        this.j.a(this.k);
        this.j.a_();
      }
      else
      {
        if ( this.h )
          this.a(new com.amazon.android.framework.prompt.PromptContent(p0.getDisplayableName(), p0.getDisplayableMessage(), p0.getButtonLabel(), p0.show()));
        if ( !this.k )
          this.b.b();
      }
    }

    protected final void onSuccess(com.amazon.venezia.command.SuccessResult p0)
 {
      boolean v2;
      com.amazon.device.iap.internal.util.e.a(a, "onSuccess: result = " + p0);
      v2 = false;
      try
      {
        v2 = this.a(p0);
      }
      catch ( Exception v3 )
      {
        com.amazon.device.iap.internal.util.e.b(a, "Error calling onResult: " + v3);
      }
      if ( v2 && this.i != null )
      {
        this.i.a_();
      }
      else if ( !this.k )
      {
        if ( v2 )
          this.b.a();
        else
          this.b.b();
      }
    }

}
