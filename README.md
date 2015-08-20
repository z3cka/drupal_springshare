# Springshare Integration for Drupal
This module integrates drupal with Springshare's APIs.
## Libcal
http://www.springshare.com/libcal
### Hours – libcal_hours
**What**: This Drupal module interacts with Libcal's Hours portion of the API. Provides a `libcal_hours_location` content type, `libcal_hours_lid` integer field that can be used to associate nodes with Library locations within Libcal's system.  

**How**: On cron, `libcal_hours` grabs opening and closing time data for the locations and stores it in custom tables like `libcal_hours_date`, `libcal_hours_time`, etc.  

**Why**: This data is exposed to views via `hook_views_data()` which describes the views handlers, etc. Developer and site builders can use these to display the desired hours on the site.

