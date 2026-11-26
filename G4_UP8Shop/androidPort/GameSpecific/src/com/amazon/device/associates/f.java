// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class f extends com.amazon.device.associates.al {
    // Fields
    private static com.amazon.device.associates.bx b;

    // Methods
    static
    {
      b = null;
    }

    public f()
    {
      super("catsearch.db", 2592000000L);
    }

    protected com.amazon.device.associates.bx a()
    {
      com.amazon.device.associates.bx v2;
      if ( b == null )
      {
        v2 = new com.amazon.device.associates.bx();
        b = v2;
        v2.b("All", "aps");
        b.b("Appliances", "appliances");
        b.b("ArtsCraftsAndSewing", "arts-crafts");
        b.b("Automotive", "automotive");
        b.b("Baby", "baby");
        b.b("Beauty", "beauty");
        b.b("Books", "books");
        b.b("CellPhones", "mobile");
        b.b("CellPhoneAccessories", "mobile");
        b.b("ClothingAndAccessories", "apparel");
        b.b("Collectibles", "collectibles");
        b.b("Computers", "computers");
        b.b("Electronics", "electronics");
        b.b("GiftCards", "gift-cards");
        b.b("Grocery", "grocery");
        b.b("Home", "garden");
        b.b("Kitchen", "garden");
        b.b("OutdoorLiving", "garden");
        b.b("HealthPersonalCare", "hpc");
        b.b("IndustrialAndScientific", "industrial");
        b.b("Jewelry", "jewelry");
        b.b("KindleStore", "digital-text");
        b.b("LawnAndGarden", "lawngarden");
        b.b("MagazineSubscriptions", "magazines");
        b.b("Misc", "misc");
        b.b("MobileApps", "mobile-apps");
        b.b("MoviesAndTV", "dvd");
        b.b("MP3Downloads", "digital-music");
        b.b("Music", "music");
        b.b("MusicalInstruments", "mi");
        b.b("OfficeProducts", "office-products");
        b.b("PetSupplies", "pets");
        b.b("Photo", "photo");
        b.b("Shoes", "shoes");
        b.b("Software", "software");
        b.b("SportsAndOutdoors", "sporting");
        b.b("ToolsAndHomeImprovement", "tools");
        b.b("ToysAndGames", "toys");
        b.b("VideoGames", "videogames");
        b.b("Watches", "watches");
        b.a("RELEVANCE", "relevancerank");
        b.a("BESTSELLING", "relevance-fs-browse-rank");
        b.a("PRICE_LOW_TO_HIGH", "price");
        b.a("PRICE_LOW_TO_HIGH", "-price");
      }
      return b;
    }

    protected com.amazon.device.associates.bx a(com.amazon.device.associates.al<com.amazon.device.associates.bx>[] p0)
 throws java.io.IOException, org.xmlpull.v1.XmlPullParserException {
      com.amazon.device.associates.al v2;
      com.amazon.device.associates.bn v3;
      com.amazon.device.associates.bx v4; // RETVAL
      com.amazon.device.associates.bj v5;
      v2 = p0[0];
      v3 = new com.amazon.device.associates.bn();
      v3.e();
      v4 = v3.d();
      v5 = v4;
      if ( v4 != null )
      {
        if ( v4.b() >= 300 && v5.b() <= 400 ) { p.c("AsyncGetgetCategorySearchDetailsAsyncTask", "Checking to load from Cache"); v2.a = (com.amazon.device.associates.bx)y.a(this.g()); if ( v2.a != null ) {
          v2.a(true);
          v2.b(false);
          return (com.amazon.device.associates.bx)v2.a;
        } }
        if ( v4.b() < 300 || v5.b() > 400 || v2.a == null ) {
          v2.a = v5;
          v2.a(true);
          v2.b(true);
          return (com.amazon.device.associates.bx)v2.a;
        }
      }
      else
      {
        v2.b(false);
        v2.a(false);
        if ( v2.a != null )
        {
          p.c("AsyncGetgetCategorySearchDetailsAsyncTask", "Setting to expired Templates as getTemplates failed");
        }
        else
        {
          v2.a = this.a();
          p.c("AsyncGetgetCategorySearchDetailsAsyncTask", "Setting Default Templates");
        }
        return (com.amazon.device.associates.bx)v2.a;
      }
      throw new IllegalStateException("Unreachable");
    }

    /* synthetic */ protected com.amazon.device.associates.bj b()
    {
      return this.a();
    }

    /* synthetic */ protected Object doInBackground(Object[] p0)
    {
      try {
      return this.a((com.amazon.device.associates.al[])p0);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
