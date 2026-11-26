// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import com.amazon.android.Kiwi;
abstract class ao extends com.amazon.android.framework.task.command.AbstractCommandTask {
    // Fields
    private static final java.lang.String b;
    protected final com.amazon.device.associates.ay a;
    private final java.lang.String c;
    private final java.lang.String d;
    private final com.amazon.device.associates.RequestId e;
    private boolean f;
    private final java.util.Map g;
    private final com.amazon.android.licensing.LicenseFailurePromptContentMapper h;

    // Methods
    static
    {
      b = com.amazon.device.associates.ao.class.getSimpleName();
    }

    ao(String p0, String p1, com.amazon.device.associates.RequestId p2, com.amazon.device.associates.ay p3)
    {
      super();
      this.h = new com.amazon.android.licensing.LicenseFailurePromptContentMapper();
      this.e = p2;
      this.c = p0;
      this.d = p1;
      this.f = false;
      this.a = p3;
      this.g = new java.util.HashMap();
      this.g.put("requestId", this.e.toString());
      this.g.put("sdkVersion", this.a.a());
    }

    protected abstract void a();

    protected void a(String p0, Object p1)
    {
      this.g.put(p0, p1);
    }

    protected void a(String p0, org.json.JSONObject p1)
    {
      Kiwi.addCommandToCommandTaskPipeline(
        new com.amazon.device.associates.bu(this.b(), p0, p1.toString(), this.a),
        this.a.b());
    }

    protected void a(boolean p0)
    {
      this.f = p0;
    }

    protected boolean a(String p0, String p1, org.json.JSONObject p2)
    {
      String v4;
      String v5;
      String v6;
      String String;
      String v8;
      String v9;
      String v10;
      int Int;
      java.util.Date v12;
      java.util.Date v13;
      Object[] v14;
      boolean isSignedByKiwi;
      org.json.JSONObject v16;
      v4 = null;
      v5 = null;
      try
      {
        v6 = this.a.a();
        String = p2.getString("productType");
        v8 = p2.getString("productId");
        v9 = p2.getString("purchaseToken");
        v10 = p2.getString("receiptId");
        Int = p2.getInt("quantity");
        v12 = new java.util.Date(p2.getLong("purchaseDate"));
        if ( p2.getBoolean("isCanceled") )
          v13 = new java.util.Date(p2.getLong("cancelDate"));
        else
          v13 = null;
        v14 = new Object[10];
        v14[0] = v6;
        v14[1] = p0;
        v14[2] = p1;
        v14[3] = v8;
        v14[4] = String;
        v14[5] = v9;
        v14[6] = v10;
        v14[7] = Integer.valueOf(Int);
        v14[8] = v12;
        v14[9] = v13;
        v4 = String.format("%s|%s|%s|%s|%s|%s|%s|%d|%tQ|%tQ", v14);
        v5 = p2.getString("signature");
        x.b(b, "string2sign:\n" + v4 + "\nsignature:\n" + v5);
        isSignedByKiwi = Kiwi.isSignedByKiwi(v4, v5);
      }
      catch ( Exception v18 )
      {
        x.a(b, "error in verifyReceipt: " + v18);
        isSignedByKiwi = false;
      }
      if ( !isSignedByKiwi )
      {
        try
        {
          v16 = new org.json.JSONObject();
          v16.put("stringToSign", v4);
          v16.put("signature", v5);
          this.a("SDKReceiptVerificationFailed", v16);
          return isSignedByKiwi;
        }
        catch ( Exception v19 )
        {
          x.b(b, "error calling submitMetric: " + v19);
        }
      }
      return isSignedByKiwi;
    }

    protected com.amazon.device.associates.RequestId b()
    {
      return this.e;
    }

    protected java.util.Map<String, Object> getCommandData()
    {
      return this.g;
    }

    protected String getCommandName()
    {
      return this.c;
    }

    protected String getCommandVersion()
    {
      return this.d;
    }

    protected boolean isExecutionNeeded()
    {
      return true;
    }

    protected void onException(com.amazon.android.framework.exception.KiwiException p0)
    {
      com.amazon.android.framework.prompt.PromptManager PromptManager;
      com.amazon.android.framework.prompt.PromptContent v3; // RETVAL
    
      x.b(b, "onException, result: " + p0.getMessage());
      try
      {
        if ( this.f )
        {
          PromptManager = Kiwi.getPromptManager();
          v3 = this.h.map(p0);
          if ( v3 != null )
            PromptManager.present(new com.amazon.device.associates.az(v3));
        }
        this.a();
      }
      catch ( Exception v4 )
      {
        x.a(b, "error in onException: " + v4);
      }
    }

    protected void onFailure(com.amazon.venezia.command.FailureResult p0)
    {
      if ( p0 != null )
      {
        x.b(b, "onFailure: result message: " + p0.getDisplayableMessage());
        if ( this.f )
          Kiwi.getPromptManager().present(new com.amazon.device.associates.az(new com.amazon.android.framework.prompt.PromptContent(p0.getDisplayableName(), p0.getDisplayableMessage(), p0.getButtonLabel(), p0.show())));
        this.a();
      }
      else
      {
        x.b(b, "onFailure: null result");
      }
    }

}
