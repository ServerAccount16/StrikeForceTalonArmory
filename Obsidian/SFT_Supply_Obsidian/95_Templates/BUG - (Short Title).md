---
tags:
  - bug
  - arma3
  - mod
status: "# open | triage | needs-info | in-progress | blocked | fixed | wontfix | duplicate"
severity: critical | major | minor | trivial
priority: P0 | P1 | P2 | P3
component: "# e.g., weapons | vehicles | UI | config | scripts | AI | framework"
mod: "# e.g., SFT_Armories"
mod_version: "# e.g., 1.3.2"
environment: "# SP | MP-Hosted | MP-Dedicated | Editor"
map: "# e.g., Altis"
mission: "# e.g., COOP_16_MissionName.VR"
repro_rate: "# e.g., 5/5, 3/5, intermittent"
reporter: "# Discord/handle"
assignee: "# leave blank until triage"
build: "# commit hash/build ID"
related: "# links/notes to other issues or PRs"
date_reported:
---

# Bug: <short, action-oriented title>

## Summary
A concise, one-sentence description of the problem and where it occurs.

## Expected Behavior
What *should* happen.

## Actual Behavior
What *does* happen (include any error messages seen in-game or logs).

## Steps to Reproduce
1. 
2. 
3. 
4. 

## Reproduction Evidence
- **Repro Rate:** <e.g., 5/5 runs>
- **Occurs On:** <map/mission/environment>
- **Client/Server:** <client-only | server-only | both>

## Logs & Diagnostics
> Attach files or paste excerpts. Prefer full logs when possible.
- **Client RPT:** (attach)
- **Server RPT:** (attach, if MP/Dedicated)
- **Crash dump (.mdmp/.bidmp/.rpt):** (attach if present)
- **Script error excerpts:** 
  ```text
  (paste relevant lines)
## Media

- **Screenshots:** (embed or link)
    
- **Short video:** (link)
    
- **Mission file / test scenario:** (attach .pbo if relevant)
    

## Workarounds

Any known temporary workaround or console/script command.

## Triage Checklist

-  Reproducible on a clean minimal modset (CBA + this mod).
    
-  Not caused by mission script or third-party mod.
    
-  Logs attached (client; server if applicable).
    
-  Clear repro steps provided.
    
-  Labeled severity/priority/component.
    

## Root Cause (dev use)

(Leave blank until investigated.)

## Fix / PR Link (dev use)

Link to branch/PR and brief note of approach.

## Verification

-  Fix tested on minimal modset.
    
-  Fix tested on full unit modset.
    
-  No regressions observed.
    
- **Tester/Date:**
    

## Notes

Any extra context, configs, or edge cases.

---

### (Optional) Dataview dashboard snippet
If you use the Dataview plugin, this query lists all *open* bugs from a folder (e.g., `Bugs/`) and sorts them:

```dataview
table status, severity, priority, component, mod, reporter, assignee, date_reported
from "Bugs"
where contains(tags, "bug") and !contains(lower(status), "fixed") and !contains(lower(status), "wontfix")
sort priority asc, severity desc, date_reported desc
