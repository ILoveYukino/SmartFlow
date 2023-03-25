#include <unordered_set>

SMART_FLOW_NAMESPACE_BEGIN

class SmartFlowElement {
    virtual int before_run();
    virtual int process();
    virtual int after_run();
    void set_defended_node_set(const std::unordered_set<SmartFlowElement*>& node_set);
private:
    std::unordered_set<SmartFlowElement*> run_before_node_set;
    std::unordered_set<SmartFlowElement*> defended_node_set;
    uint32_t defended_node_cnt;

    std::string node_name;
};

SMART_FLOW_NAMESPACE_END